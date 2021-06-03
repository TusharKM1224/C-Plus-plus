#include <bits/stdc++.h>
#define size 2
using namespace std;

class student
{
    int rollno;
    char name[20];
    float marks;

public:
    void readdata();
    void disp();
    int getrollno(void)
    {
        return rollno;
    }
};
student s1[size];
void student::readdata()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nEnter the student's Name :";

    cin.getline(name, 20);
    cout << "\n Enter the Student's roll no.:";
    cin >> rollno;
    cout << "\nEnter the Student's marks:";
    cin >> marks;
}
void student ::disp()

{
    cout << "\nStudent Details below";
    cout << "\n Name :" << name;
    cout << "\n Roll no :" << rollno;
    cout << "\n Marks of the Students:" << marks;
}
int main()
{
    int choice;
    int roll;
    char ch;
    cout << "Enter the 2 students detail" << endl;
    for (int i = 0; i < size; i++)
    {
        s1[i].readdata();
    }
sec2:
    cout << "Do you want to check the students details: (y/n)";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        goto point1;
    }
    else
    {

        exit(0);
    }
point1:
    cout << "Enter your choice "
         << "\n 1. show details on basis of roll no."
         << "\n2. show all student details.";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the rollno. of the student:";
        cin >> roll;
        for (int i = 0; i < size; i++)
        {
            if (s1[i].getrollno() == roll)
            {
                s1[i].disp();
            }
        }
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            s1[i].disp();
        }
        break;
    default:
        cout << "wrong choice!!" << endl;
        goto sec2;
        break;
    }
    return 0;
}