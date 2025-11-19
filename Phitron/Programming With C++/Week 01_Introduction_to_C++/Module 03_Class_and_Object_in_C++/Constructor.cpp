#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa; 

    Student(int r,int c,double g)
    {
        roll = r;
        cls = c;
        gpa =g;
    }

};
int main()
{
    Student rahim(25,8,3.86);
    Student karim(02,8,5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl ;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl ;

    return 0;
}