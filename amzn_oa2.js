let deployments =  [
    `{"deployment_id": "d-123456abcd", "status": "Success"}`,
    `{"deployment_id": "d-098765efgh", "status": "Fail"}`
]
let arr = [0, 0, 0];

for(let i=0; i<deployments.length; i++) {
    deployments[i] = JSON.parse(deployments[i]);
    if(deployments[i].deployment_id[0]!='d' || deployments[i].deployment_id[1]!='-' || deployments[i].deployment_id.length!=12) arr[2]++;
    else if(deployments[i].status === "Success") arr[0]++;
    else if(deployments[i].status === "Fail") arr[1]++;
    else arr[2]++;
}
console.log(arr);