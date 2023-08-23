#include <iostream>
using namespace std;
int main()
{
    int n, k, a;
    cin >> n >> k;
    int num[n];
    int sum = 0;
    if (k >= 1 && k <= n && k <= 50)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a >= 0 & a <= 100)
            {
                num[i] = a; // taking array
            }
        }
        if (a >= 0 & a <= 100)
        {

            int position = num[k - 1]; // made variable to store kth position value
            for (int i = 0; i < n; i++)
            {
                if (num[i] >= position&&num[i]>0)
                { // checking
                    sum += 1;
                }
            }
        }
        cout << sum << endl;

    }

    return 0;
}