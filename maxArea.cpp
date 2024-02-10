#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> height{1,8,6,2,5,4,8,3,7};

    int n = height.size();
    int ans = min(height[0], height[n-1])*(n-1);
    int st = 0, en = n-1;
    while(st < en){
        if(height[st] < height[en])
            st++;
        else
            en--;
        
        ans = max(ans,min(height[st], height[en])*(en-st));
    }

    cout<<ans;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
