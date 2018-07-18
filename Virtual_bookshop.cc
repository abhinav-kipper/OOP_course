#include<iostream>
using namespace std;
class media
{
   protected : string title,pub;
   public:
    virtual void read()
    {
        cout<<"Title:";
        cin>>title;
        cout<<"Publication:";
        cin>>pub;

    }
    virtual void show()
    {
        cout<<title<<"\n"<<pub;
    }


};

class books: public media{
        int nopages;
    public:
        void read()
        {
            cout<<"Title:";
        cin>>title;
        cout<<"Publication:";
        cin>>pub;
        cout<<"Noofpages:";
        cin>>nopages;

        }
        void show()
    {
        cout<<title<<"\n"<<pub<<"\n"<<nopages;
    }
};

class tape:public media
{
    int time;
    void read()
        {
            cout<<"Title:";
        cin>>title;
        cout<<"Publication:";
        cin>>pub;
        cout<<"Time::";
        cin>>time;

        }
        void show()
    {
        cout<<title<<"\n"<<pub<<"\n"<<time;
    }
};

main()
{
    media *p,m;
    p=&m;
    p->read();
    p->show();
    books b;
    p=&b;
    p->read();
    p->show();
    tape t;
    p=&t;
    p->read();
    p->show();
}
