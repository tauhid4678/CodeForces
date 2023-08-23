#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 50)
    {
        string s(n ,' ');// resizing
        string string1;

        int i, x, y, sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == 'R' || s[i] == 'G' || s[i] == 'B')
            {
                string1 = string1 + s[i];
            }
        }
        for (x = 0; x < n; x++)
        {
            if (string1[x] == string1[x + 1])
            { // checking 1st and 2nd index is same or not
                sum++;
            }
        }
        cout << sum;
    }
    return 0;
}
