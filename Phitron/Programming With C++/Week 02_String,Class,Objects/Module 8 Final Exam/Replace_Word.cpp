#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        string x;
        cin >> x;
        int x_ln = x.length();
        while (true)
        {
            int inx = s.find(x);
            if (inx != -1)
            {
                s.replace(inx, x_ln, "#");
            }
            else
            {
                break;
            }
        }
        cout << s <<endl;
    }

    return 0;
}