#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,x{};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            x+=1;
        }
        }
        if(x>0){
            cout<<"HARD";
        }
        else{
            cout<<"EASY";
        }
    }
