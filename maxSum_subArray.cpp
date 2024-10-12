#include<bits/stdc++.h>
using namespace std;
vector<int> maxSum(vector<int>& arr,int n){
    bool allNeg = true;
    int maxNeg = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]=0){
            allNeg = false;
        }
        maxNeg = max(maxNeg,arr[i]);
    }
    if(allNeg) return {maxNeg};

    
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans;
    ans = maxSum(arr,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}