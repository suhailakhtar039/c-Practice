#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t = 6;
    vector<int> a{3,2,4};
    unordered_map<int,int> ans;
    vector<int> c;
    for(int i=0; i<a.size(); i++){
        int b = t-a[i];
        if(ans.count(b)){
            c.push_back(i);
            c.push_back(ans[b]);
        }
        ans[a[i]] = i;
    }
    for(auto i:c)
        cout<<i<<" ";
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
