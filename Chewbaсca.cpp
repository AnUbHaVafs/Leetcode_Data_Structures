#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getMinPosNumber(int num){
    string minNum = "";
    while(num>0){
        int rem = num%10;
        int digit = min(rem,9-rem);
        minNum+=to_string(digit);
        num/=10;
    }
    reverse(minNum.begin(),minNum.end());
    string rev = string(minNum.rbegin(),minNum.rend());
    if(rev[0]=='0')rev[0]='9';
    return stoi(rev);
}

int main(){
    int num;
    cin>>num;
    cout<<getMinPosNumber(num)<<endl;
    return 0;
}
