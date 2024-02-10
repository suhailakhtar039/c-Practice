#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> nums{10, 15, 17, 20, 4, 5, 6, 7};
    int n = nums.size();
    if(n == 1){
        cout<<nums[0];
        return;
    }

    int st = 0, en = n-1;
    while(st < en){
        int mid = (st+en)/2;
        if(nums[en] > nums[st]){
            cout<<nums[st];
            return;
        }
        else if(nums[mid] >= nums[st])
            st = mid+1;
        else
            en = mid;
    }
    cout<<nums[st];
    return;
}
int main(){
    solve();
}