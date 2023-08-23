#include <iostream>
using namespace std;
int main()
{
    int x, a, b; // a elephant house x is friend house
    cin >> x;
    if (x >= 1 && x <= 1000000)
    {
        for (int i = 5; i > 0; i--)
        {

            if (x / i)
            {
                if (x % i == 0)
                {
                    a = x / i;
                    cout<<a<<endl;
                    break;
                    
                }
                else
                {
                    a = x / i;
                    b = x - (i * a);
                    
                    for(int i=5;i>=b;i--){
                        if(b%i==0){
                            int k= b/i;
                          
                            cout<<a+k<<endl;
                            break;
                        }
                    }
                    break;
                }
                
            }
        }
    }
}