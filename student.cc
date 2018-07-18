#include<iostream>
using namespace std;
class student
{
private:
    int marks ;
public:
    student()
    {
        marks=0;
    }
    student(int m)
    {
        marks=m;
    }
    student max(student s1,student s2);
    student max(student s1);
    student max(student s1,student s2,student s3);
    void display();
};
student student::max(student s1)
{
    student temp=0;
    if (marks>s1.marks)
    {
        temp.marks=marks;
        return temp;
    }
        else return s1;
}

student student::max(student s1,student s2)
{
    student temp=0;
    if (marks>s1.marks && marks>s2.marks)
        {
            temp.marks=marks;
            return temp;
        }
            else if (s1.marks>marks && s1.marks>s2.marks)
    {
        return s1;
    }
    else return s2;
}
student student::max(student s1,student s2,student s3)
{
    student temp=0;
    if (marks>s1.marks && marks>s2.marks)
        {
            if (marks>s3.marks)
                {
                    temp.marks=marks;
                    return temp;
                }
            else return s3;
        }
    else if (s1.marks>marks && s1.marks>s2.marks)
    {
        if (s1.marks>s3.marks)
            return s1;
        else return s3;
    }
    else {if (s2.marks>s3.marks)
        return s2;
    else return s3;}
}
void student :: display()
{
    cout<<"\n"<<marks;
}

main()
{
    student s[10],smax;

    s[1]=3;
    s[2]=4;
    s[3]=5;
    s[4]=6;
    s[5]=2;
    s[6]=1;
    s[7]=0;
    s[8]=10;
    s[9]=9;
    smax=s[1].max(s[2]);
    smax.display();
    smax=s[1].max(s[2],s[3]);
     smax.display();
    smax=s[1].max(s[2],s[3],s[6]);
     smax.display();
      smax=s[1].max(s[2],s[3],s[4]);
      smax=smax.max(s[5],s[6],s[7]);
      smax=smax.max(s[8],s[9]);
      smax.display();
}
