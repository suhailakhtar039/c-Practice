#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int sum = 0, max_sum = INT_MIN;
    for(int i = 0; i<n; i++){
        sum+=nums[i];
        max_sum = max(sum, max_sum);
        if(sum < 0){
            sum = 0;
        }
    }
}
int main(){

}