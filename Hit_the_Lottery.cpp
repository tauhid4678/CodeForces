<<<<<<< HEAD
#include<iostream>
using namespace std;
int main (){
    int n,sum=0,remain;
    int arr[5]={100,20,10,5,1};
    cin>>n;
    for(int i=0;i<5;i++){
        if(n=0){
            break;
        }
        else {
            remain=n%arr[i];
            cout<<remain<<endl;
            sum=sum+1;
            n=n-arr[i];
        }
    }
    cout<<sum;
    return 0;
=======
#include<iostream>
using namespace std;
int main (){
    int n,sum=0,remain;
    int arr[5]={100,20,10,5,1};
    cin>>n;
    for(int i=0;i<5;i++){
        if(n=0){
            break;
        }
        else {
            remain=n%arr[i];
            cout<<remain<<endl;
            sum=sum+1;
            n=n-arr[i];
        }
    }
    cout<<sum;
    return 0;
>>>>>>> 3ebc621d61edd0f0c9e958917fe8dce41775dcb1
}