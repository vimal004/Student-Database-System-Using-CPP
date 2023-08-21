//FIRST PROJECT
#include<iostream>
using namespace std;
class stu
{
    public:
    int mat,phy,che;
    string name;
    void insert()
        {
            cout<<"Enter student name : ";
            cin>>name;
            cout<<"Enter student's maths marks : ";
            cin>>mat;
            cout<<"Enter student's physics marks : ";
            cin>>phy;
            cout<<"Enter student's chemistry marks : ";
            cin>>che;
        }
    void disp()
    {
        cout<<name<<"     "<<mat<<"     "<<phy<<"       "<<che<<endl;
    }
};
int main()
{
    stu s[1000];
    int option;
    string NAME;
    do
    {
        cout<<"**********STUDENT PERFORMANCE REPORT MAINTENANCE SYSTEM**********"<<endl;
        cout<<"To enter student marks enter 1"<<endl;
        cout<<"To update student marks enter 2"<<endl;
        cout<<"To view total students mark details enter 3"<<endl;
        cout<<"To view the student mark detail by name enter 4"<<endl;
        cout<<"To check if the student has passed or not enter 5"<<endl;
        int b;
        cin>>b;
        switch(b)
        {
            case 1:
            cout<<"Enter the number of students you want to enter : ";
            int n;
            cin>>n;
            for (int i=0;i<n;i++)
            {
                s[i].insert();
            }
            cout<<"To exit enter 0"<<endl;
            cin>>option;
            break;
            case 2:
            cout<<"Enter the name of student : ";
            cin>>NAME;
            for (int i=0;i<n;i++)
            {
                if(s[i].name==NAME)
                {
                    cout<<"Enter the new math marks : ";
                    cin>>s[i].mat;
                    cout<<"Enter the new physics marks : ";
                    cin>>s[i].phy;
                    cout<<"Enter the new chemistry marks : ";
                    cin>>s[i].che;
                }
                else
                {
                    cout<<"Student not found"<<endl;
                }
            }
            cout<<"To exit enter 0"<<endl;
            cin>>option;
            break;
            case 3:
            cout<<"Enter the number of students you want to view : ";
            int b;
            cin>>b;
            cout<<"NAME"<<"     "<<"MATHS"<<"  "<<"PHYSICS"<<"  "<<"CHEMISTRY"<<endl;
            for (int i=0;i<b;i++)
            {
                s[i].disp();
            }
            cout<<"To exit enter 0"<<endl;
            cin>>option;
            break;
            case 4:
            cout<<"Enter the name of student you want to view the report of : ";
            cin>>NAME;
            for(int i=0;i<n;i++)
            {
                if(s[i].name==NAME)
                {
                    cout<<"NAME"<<"     "<<"MATHS"<<"  "<<"PHYSICS"<<"  "<<"CHEMISTRY"<<endl;
                    s[i].disp();
                }
                else
                {
                    cout<<"Student not found"<<endl;
                }
            }
            cout<<"To exit enter 0"<<endl;
            cin>>option;
            break;
            case 5:
            cout<<"Enter the student's name to check if he/she has passed or not : ";
            cin>>NAME;
            for(int i=0;i<n;i++)
            {
                if(s[i].name==NAME)
                {
                    if(s[i].mat>=33 && s[i].phy>=33 && s[i].che>=33)
                    {
                        cout<<s[i].name<<" has passed"<<endl;
                    }
                    else
                    {
                        cout<<s[i].name<<" has failed"<<endl;
                    }
                }
            }
            cout<<"To exit enter 0"<<endl;
            cin>>option;
            break;
            default:
            cout<<"Entered option is wrong"<<endl;
            break;
        }
    }
    while(option!=0);
}