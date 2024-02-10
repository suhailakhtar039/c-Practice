#include<bits/stdc++.h>

using namespace std;

bool solve(){
    int nums[] = {2,3,3,4};
    unordered_map<int,int> m;
    for(int i = 0; i<4; i++){
        if(m.count(nums[i])){
            return true;
        }
        m[nums[i]] = 1;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
