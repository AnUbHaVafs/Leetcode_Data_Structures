#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int minD = min(x1,min(x2,x3));
    int maxD = max(x1,max(x2,x3));
    int dis=minD;
    int minDist = maxD;
    while(dis<=maxD){
        int totalDis = abs(dis-x1)+abs(dis-x2)+abs(dis-x3);
        minDist = min(minDist,totalDis);
        dis++;
    }
    cout<<minDist<<endl;
    return 0;
}
