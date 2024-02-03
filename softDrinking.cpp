#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toastsCnt1 = (k*l)/nl;
    int toastsCnt2 = (c*d)/1;
    int toastsCnt3 = (p)/np;
    int ans = min(min(toastsCnt1,toastsCnt2),toastsCnt3)/n;
    cout<<ans<<endl;
    return 0;
}
