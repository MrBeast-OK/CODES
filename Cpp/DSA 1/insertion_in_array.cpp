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
    for(int i=0; i<10; i++)
    {
        a[i].getdata();
    }
}
    for(int i=1; i<10; i++)
    {
        temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j].marks < temp.marks)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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

    for(int i=0; i<10; i++)
    {
        a[i].display();
    }