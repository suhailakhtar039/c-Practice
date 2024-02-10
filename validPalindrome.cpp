#include <bits/stdc++.h>
using namespace std;

bool isPalindrome()
{
    string s = "A man, a plan, a canal: Panama";

    string ans = "";
    for (auto c : s)
    {
        if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'))
        {
            if (c >= 'a' and c <= 'z')
                c = toupper(c);

            ans += c;
        }
    }
    //        cout<<ans<<endl;
    int n = ans.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (ans[i] != ans[n - i - 1])
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cout<<isPalindrome();
    /* code */
    return 0;
}
