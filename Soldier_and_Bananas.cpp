#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    if(k>=1&&w<=1000&&n>=0&&n<=1000000000){
        int total_cost=0;
        for(int i=1;i<=w;i++){
            total_cost=total_cost+(i*k);
        }
        int borrow= total_cost-n;
        if(borrow>0){
            cout<<borrow<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}