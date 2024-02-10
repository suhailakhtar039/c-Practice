#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> nums{-3, -4, 0, 10, -10};
    int n = nums.size();
    int ans = INT_MIN, prod1 = 1, prod2 = 1;
    for(int i = 0; i<n; i++){
        prod1 *= nums[i];
        prod2 *= nums[n-i-1];
        ans = max(ans,max(prod1, prod2));
        if(nums[i]==0){
            prod1 = 1;
        }
        if(nums[n-i-1]==0)
            prod2 = 1;
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}