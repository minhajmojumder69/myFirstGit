#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ar(s);
    string word;
    int flag = 0;
    while (ar >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}