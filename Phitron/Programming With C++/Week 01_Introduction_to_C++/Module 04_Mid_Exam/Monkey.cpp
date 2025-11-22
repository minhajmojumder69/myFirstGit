#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=100001;
    char ar[n];  
    char ar2[n];  
    while (cin.getline(ar,n))
    { 
        int m=0;
        for (int i = 0; ar[i] != '\0'; i++)
        {
            if (ar[i] != ' ') {
                ar2[m] = ar[i];
                m++;
            }
        }
        sort(ar2,ar2+m); 

        for (int i = 0; i<m ; i++)
        {
            cout << ar2[i];
        }
        cout << endl;

    }

    return 0;
}
