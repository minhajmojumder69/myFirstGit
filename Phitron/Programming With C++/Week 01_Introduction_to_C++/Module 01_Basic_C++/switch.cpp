#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Saturday" ;
            break;
        case 2:
            cout << "Sunday" ;
            break;
        case 3:
            cout << "Monday";
            break;
    }
    return 0;
}