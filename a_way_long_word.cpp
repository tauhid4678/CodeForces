#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string x;
    int len, mid;
    char first, last;
    cin >> n;
    if (n >= 1 && n <= 100)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            len = x.length();
            if (len >= 0 && len <= 100)
            {
                if (len > 10)
                {
                    first = x.at(0);
                    last = x.at(len-1);
                    mid = len - 2;
                    cout << first << mid << last << endl;
                }
                else
                {
                    cout << x << endl;
                }
            }
        }
    }

    return 0;
}
