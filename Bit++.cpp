#include<iostream>
#include<string>
using namespace std;

int main(){
    int statementsCount;
    cin>>statementsCount;
    int plus=0,minus=0;
    while(statementsCount--){
        string statement;
        cin>>statement;
        if(statement.find("--")!=string::npos)minus++;
        else if(statement.find("++")!=string::npos)plus++;
    }
    cout<<plus-minus<<endl;
    return 0;
}
