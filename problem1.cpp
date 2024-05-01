#include <iostream>
#include<map>
#include <string>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string name,ip;
    map<string,string>mp;
    for(int i=0; i<n; i++){
        cin>>name>>ip;
        ip += ';';
        mp[ip] = name;
    }
    for(int i=0; i<m; i++){
        cin>>name>>ip;
        cout<<name<<" "<<ip<<" #" + mp[ip]<<endl;
    }
    return 0;
}