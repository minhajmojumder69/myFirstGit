#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char ar[101];
    cin.getline(ar,101);

    //string x;
    
    cout << x << endl << ar <<endl;
    
    return 0;
}