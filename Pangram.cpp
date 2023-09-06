#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s; // set store unique num or char in ordered form

    char c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if(isalpha(c)){
            s.insert(towlower(c));
        }
    }
    if(s.size()==26){
        cout<<"YES";
    }
    else
    cout<<"NO";
}