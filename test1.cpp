#include <iostream>
#include <cstring>

using namespace std;

// Function to convert a character to lowercase
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    string x, y;

    // Input from the user
    
    getline(cin, x);

    getline(cin, y);
    int ln=x.length();
    if (x.length() == y.length()&&ln>=1 &&ln<=100) {
        // Convert each character of the strings to lowercase
        for (int i = 0; i < ln; i++) {
            x[i] = toLower(x[i]);                // calling tolower function
            y[i] = toLower(y[i]);               // calling tolower function
        }
        if(x==y){
            cout<<"0"<<endl;
        }
        else if(x>=y){
            cout<<"1"<<endl;
        }
        else if(x<=y){
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
