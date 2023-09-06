#include <bits/stdc++.h>
using namespace std;
int main(){
    int num[250];
    int n,x,y,count=0;
    cin>>n>>x;
    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    cin>>y;
    for(int i=x;i<x+y;i++){
        cin>>num[i];
    }
    sort(num,num+(x+y));
    for(int j =0;j<x+y;j++){
        if(num[j]!=num[j+1]){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    
}