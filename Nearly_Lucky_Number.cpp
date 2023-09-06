#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int sum{};
    getline(cin,s1);
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='4'||s1[i]=='7'){
            sum++;
        }
    }
    if(sum==4||sum==7){
        cout<<"YES"<<endl;

    }
    else
    cout<<"NO";

}