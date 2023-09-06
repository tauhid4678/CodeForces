#include <iostream>
int main(){
    std::string str;
    std::cin>>str;
    if(str[0]>96){ // checking the first charecter is lowwer or not
        str[0]-=32; // if not then min 32 to covert in upper case
        }

    std::cout<<str<<std::endl;
    }
