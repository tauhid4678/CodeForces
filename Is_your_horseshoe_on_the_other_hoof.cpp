#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    //variable == variable means checking condition and it genarate boolean value true or false
    cout<<(a==b)+(a==c||b==c)+(d==a||d==b||d==c); 
}