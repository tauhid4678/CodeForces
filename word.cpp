#include <bits/stdc++.h>
using namespace std;
int main(){
    int upper{},lower{}; // empty curly means defualt  value 0 
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }
    for(char c:s){ // this loo will run each element in s
        if(upper>lower){
            cout<<(char)toupper(c); // here char mean charecter version of ascii
        }
        else{
            cout<<(char)tolower(c);
        }
    }
}