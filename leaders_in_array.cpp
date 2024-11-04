#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi = INT_MIN;

        for(int i=n-1;i>=0;i--){
            if(arr[i]>maxi){
                cout<<arr[i]<<" ";
            }
            else if(arr[i]<maxi){
                continue;
            }
            maxi = max(maxi,arr[i]);
        }
        cout<<endl;
    }
    return 0;
}