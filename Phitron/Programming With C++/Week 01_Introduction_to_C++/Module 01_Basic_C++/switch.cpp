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
        case 2:
            cout << "Sunday" ;
        case 3:
            cout << "Monday";
    }
    return 0;
}