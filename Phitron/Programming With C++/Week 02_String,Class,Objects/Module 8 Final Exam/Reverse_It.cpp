#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int roll;
};

int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].sec >> ar[i].roll;
    }

    char ab[n];
    for (int i = 0; i < n; i++)
    {
        ab[i]= ar[i].sec;
    }
    reverse(ab,ab+n);
    for (int i = 0; i < n; i++)
    {
        ar[i].sec= ab[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].sec << " " << ar[i].roll << endl;
    }

    return 0;
}
