#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h,a,sum{};
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<=h){
            sum++;
        }
        else{
            sum+=2;
        }
    }
    cout<<sum;
}