#include <iostream>
#include <string>
using namespace std;
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') { // tolower case with function
        return c + 32;
    }
    return c;
}
int main(){
    string old,new1="";
    getline(cin, old);
    if(old.length()<=100){
        int i,j;
        // remove duplicate charecter in string
        for( i=0;i<old.length();i++){
                old[i] = toLower(old[i]);
            for( j=0;j<old.length();j++){
                if(old[i]==old[j]){ 
                    break;
                }
            }
            if(i==j){
                new1=new1+old[i];
            }
        }
        if(new1.length()%2==0){ // checking the length of string is even or odd
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    }
    return 0;

}
