#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,p;
    double sum=0;
    cin>>n;
    if(n>=1&&n<=100){
        for(int i=0;i<n;i++){
            cin>>p;
            if(p>=0&&p<=100){
                sum=sum+p;
            }
        }
        double avg=sum/n;
        cout<<fixed<<setprecision(12)<<avg<<endl;
    }
    return 0;
}