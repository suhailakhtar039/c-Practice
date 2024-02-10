#include<bits/stdc++.h>
using namespace std;

void solve(){
    int ans = 0;
    vector<int> a{3,2,4,5,7,2};
    int n = a.size();
    int minArr[n] = {INT_MAX};
    int maxArr[n] = {INT_MIN};
    if(n<1){
        cout<<0;
        return;
    }
    minArr[0] = a[0];
    maxArr[n-1] = a[n-1];
    for(int i = 1; i<n; i++)
        minArr[i] = min(minArr[i-1], a[i]);

    for(int i = n-2; i>=0; i--)
        maxArr[i] = max(maxArr[i+1],a[i]);

    

    for(int i = 0; i<n; i++)
        ans = max(ans, maxArr[i]-minArr[i]);

    cout<<ans;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
