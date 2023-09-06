#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert a character to lowercase

int main() {
    string s, t;

    // Input from the user
    
    cin>>s>>t;
    int ln=s.length();
    if (s.length() == t.length()&&ln>=1 &&ln<=100) {
        // Convert each character of the strings to lowercase
        reverse(s.begin(),s.end());
        if(s==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
