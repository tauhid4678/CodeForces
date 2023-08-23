#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end()); // sort function included in algorithm libary
    string final_string; // creating new string
    int len = s.length(); 
    for (int i = 0; i < len; i++) // this loop will assing old string sorting value to new one
    {
        if (s[i] >= '0' && s[i] <= '9') // this will only check number to assing
        {

            final_string = final_string + s[i]; // assing number
            if (s[i + 1] >= '0' && s[i + 1] <= '9') //// this will only check number to assing + symbol after every number
            {

                final_string = final_string + '+';
            }
        }
    }

    cout << final_string;
    return 0;
}