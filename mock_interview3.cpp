#include<bits/stdc++.h>
using namespace std;
bool isGreaterOrEqual(string time1, string time2, string duration){
    int minutes = stoi(time1.substr(3, 2)) - stoi(time2.substr(3, 2));
    int hours = stoi(time1.substr(0, 2)) - stoi(time2.substr(0, 2));
    if(minutes<0){
        hours--;
        minutes = 60+minutes;
    }
    string timeBlockDuration = to_string(hours) + ":" + to_string(minutes);
    if(timeBlockDuration>=duration) return true;
    return false;
}
int main(){
    //  list 1   ||||||       ||||||||         ||||||||||||
    //   list 2  ||||||||         ||||||||||        ||||||||||||||||
    //  new list    ||||||||     ||||||||||||||   |||||||||||||||||||||
    // The idea is to merge the two lists of lists into one.
    // the cumulative bound for the meetings would be [max(start1, start2), min(end1, end2)].
    // Brute force: O(mn) time.
    vector<vector<string>> time1 = {{"09:00", "10:30"}, {"12:00", "13:00"}, {"16:00", "18:00"}};
    vector<vector<string>> time2 = {{"10:00", "11:30"}, {"12:30", "14:30"}, {"14:30", "15:00"}, {"16:00", "17:00"}};
    vector<string> bound1 = {{"09:00", "20:00"}};
    vector<string> bound2 = {{"10:00", "18:30"}};
    int duration  = 30; // in minutes.

    vector<vector<string>> ans;

    // converting the duration to hh:mm format.
    int hours = duration/60;
    int minutes = duration % 60;
    string dur = "";
    if(hours < 10){
        dur+='0';
        dur+=to_string(hours);
    }
    else dur+=to_string(hours);
    dur+=':';
    dur+=to_string(minutes);

    // merge the two lists in 1 (take union).
    for(int i=0; i<time2.size(); i++){
        for(int j=0; j<time1.size(); j++){
            if((time1[j][0]<=time2[i][0] && time1[j][1]>=time2[i][0]) || (time1[j][0]<=time2[i][1] && time1[j][1]>=time2[i][1])){
                time1[j] = {min(time1[j][0], time2[i][0]), max(time1[j][1], time2[i][0])};
                break;
            }
        }
    }
    // perform a merge on time1.
    for(int i=0; i<time1.size()-1; i++){
        if(time1[i][1]>=time1[i+1][0]){
            time1[i] = {time1[i][0], max(time1[i][1], time1[i+1][1])};
            time1.erase(time1.begin()+i+1);
            i--;
        }
    }
    // figure out the free time blocks.
    for(int i=0; i<time1.size()-1; i++){
        if(isGreaterOrEqual(time1[i][1], time1[i+1][0], dur)){
            ans.push_back({time1[i][1], time1[i+1][0]});
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}