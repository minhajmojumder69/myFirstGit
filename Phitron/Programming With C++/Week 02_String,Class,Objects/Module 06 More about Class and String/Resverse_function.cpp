#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    // }
    // reverse(ar,ar+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    
    string ar;
    cin >> ar;
    reverse(ar.begin(),ar.end());
    cout << ar << endl;

    return 0;
}