#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>& arr,int n){
    bool allNeg = true;
    int maxNeg = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]=0){
            allNeg = false;
        }
        maxNeg = max(maxNeg,arr[i]);
    }
    if(allNeg) return {maxNeg};

    int sum = 0;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int maxi = INT_MIN;

    for(int i =0;i<n;i++){
        if(sum == 0){
            start = i;
        }

        sum+=arr[i];

        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum<0){
            sum = 0;
        }
    }

    for(int i = ansStart; i<= ansEnd; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return maxi;
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int ans;
    ans = maxSum(arr,n);

    cout<<ans<<endl;

    return 0;
}