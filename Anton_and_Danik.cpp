<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a{},d{};
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s.at(i)=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a<d){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }


=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a{},d{};
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s.at(i)=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a<d){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }


>>>>>>> 3ebc621d61edd0f0c9e958917fe8dce41775dcb1
}