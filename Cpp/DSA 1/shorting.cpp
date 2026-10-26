#include<iostream>
using namespace std;
class student
{
public:
    int rollno, marks;
    string name;
    void getdata()
    {
        cin>>rollno>>marks;
        getline(cin, name);
    }
    void display()
    {
        cout<<rollno<<" "<<name;
    }
};
int main()
{
    student a[10], temp;
    for(int x=0; x<10; x++)
    {
        a[x].getdata();
    }
    for(int x=0; x<9; x++)
    {
        for(int y=x+1; y<10; y++)
        {
            if(a[x].marks < a[y].marks)
            {
                temp = a[x];
                a[x] = a[y];
                a[y] = temp;
            }
        }
    }
    for (int x=0; x<10-1 ; x++)
    {
       for (int y=0; y<10-x-1 ; y++)
       {
           if (a[y].marks == a[y+1].marks)
           {
               if (a[y].rollno > a[y+1].rollno)
               {
                   temp = a[y];
                   a[y] = a[y+1];
                   a[y+1] = temp;
               }
           }
       }
    }
}