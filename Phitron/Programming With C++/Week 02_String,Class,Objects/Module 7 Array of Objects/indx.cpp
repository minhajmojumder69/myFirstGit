#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char sec;
    int roll;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l, Student r)
{
    // if (l.math_marks > r.math_marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    int total= l.math_marks + l.eng_marks;
    int total2= r.math_marks + r.eng_marks;
    if (total == total2)
    {
        return l.roll < r.roll;
    }
    else
    {
        return total > total2;
    }

}
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].sec >> ar[i].roll >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].sec << " " << ar[i].roll << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }

    return 0;
}
