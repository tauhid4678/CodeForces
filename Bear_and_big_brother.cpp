#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b; // a Limak weigh and b for Bob
    cin >> a >> b;
    if (a >= 1 && a <= b && b <= 10)
    {
        for (int i = 1;; i++)
        {
            a = a * 3; // new value will multiply with 3 and 2 after every loop run
            b = b * 2;
            if (a > b)
            {
                cout << i << endl;
                break; // loop terminate when condition became true
            }
        }
    }
    return 0;
}