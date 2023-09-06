#include<bits/stdc++.h>
int main(){
    int a,b; //a is the given int and b is number subtractions
    std::cin>>a>>b;
    for(int i =0;i<b;i++){
        if(a%10==0){// a%10 it will define last digit and check is it 0 or not
            a=a/10;
        }
        else{
            a--;
        }
    }
    std::cout<<a;
}