#include<bits/stdc++.h>
using namespace std;
int* sort_it(int x)
{
    int* ar = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+x, greater<int>());
    
     return ar;
}
int main()
{
    int n;
    cin >> n;
    int* ar= sort_it(n);
   
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " " ;
    }

    return 0;
}