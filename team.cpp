#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, a, x = 0, f = 0;
    int num[3];
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < 3; i++)
            {
                cin >> a;
                if (a == 1)
                {
                    x = x + 1;
                }
            }
            if (x >= 2)
            {
                f = f + 1;
            }
            x = 0;
        }
        cout << f << endl;
    }
    return 0;
}
