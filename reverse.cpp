#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    for (char &k : s)
    {
        if (k > '4')
            k = '9' - k + '0';
    }
    if (s[0] == '0')
        s[0] = '9';
    cout << s;
    return 0;
}
