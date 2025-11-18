#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int* a= new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    
    return a;
}
int main()
{
    int* n= fun();
    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}