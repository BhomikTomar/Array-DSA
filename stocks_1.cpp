#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int i = 0;
        int profit = 0;
        while(i < prices.size()){
            mini = min(mini, prices[i]);
            profit = max(profit, prices[i]-mini);
            i++;
        }
        return profit;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans = maxProfit(arr);
        cout<<ans<<endl;
    }
    return 0;
}