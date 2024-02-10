#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> nums{4,2,3,5};
    int n = nums.size();
    int prod = 1;
    vector<int> ans;
    vector<int> suffix(n);
    suffix[n-1] = nums[n-1];
    for(int i = n-2; i>=0; i--){
        suffix[i] = nums[i] * suffix[i+1];
    }

    for(int i = 0; i<n; i++){
        if(i == 0){
            ans.push_back(suffix[i+1]);
        }
        else if(i == n-1)
            ans.push_back(prod);
        else
            ans.push_back(prod*suffix[i+1]);
        
        prod *= nums[i];
    }

}
int main(){
    solve();
    return 0;
}