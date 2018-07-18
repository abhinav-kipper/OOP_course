#include<iostream>
using namespace std;

 class employee
 {
     protected: string fname;
              string lname;
              int ssn;
     public:
         employee()
         {
             cout<<"\nEnter First name:";
             cin>>fname;
             cout<<"\nEnter Last name:";
             cin>>lname;
             cout<<"\nEnter ssn NO:";
             cin>>ssn;
         }
         virtual void earnings()=0;
         virtual void print()
         {
             cout<<"FirstName:"<<fname<<"\nLastName:"<<lname<<"\nssn:"<<ssn<<"\n";
         }


 };
 class salaried_employee:public employee
 {
        int wsalary=1000;
           public: void earnings()
            {
                cout<<"SALARY:"<<wsalary;
            }
            void print()
         {
             cout<<"\nTYPE=\"Salaried Employee\"\n"<<"\nFirstName:"<<fname<<"\nLastName:"<<lname<<"\nssn:"<<ssn<<"\n";
         }

 } ;

 class hourly_employee:public employee
 {
        float hours,wage;

       public: hourly_employee()
       {
           cout<<"Hourly:";
           cin>>hours;
           cout<<"Wage:";
           cin>>wage;
       }
            void earnings()
            {
                cout<<"SALARY";
                if (hours<=40)
                {
                    cout<<wage*hours;
                }
                if (hours>40)
                {

                    cout<<(40*wage)+(hours*40)*wage*1.5;
                }

            }
            void print()
         {
             cout<<"\nTYPE=\"Hourly Employee\"\n"<<"FirstName:"<<fname<<"\nLastName:"<<lname<<"\nssn:"<<ssn<<"\n"<<"\nHours:"<<hours<<"\nWage:"<<wage;
         }


 } ;

 class commission_employee:public employee
 {
     protected: float comrate=0.1,sales;
       public: commission_employee()
       {
           cout<<"Enter Gross Sales:";
           cin>>sales;
       };
            void earnings()
            {
                cout<<"SALARY:";
                cout<<(comrate*sales);

            }

            void print()
         {
             cout<<"\nTYPE=\"Commission Employee\"\n"<<"FirstName:"<<fname<<"\nLastName:"<<lname<<"\nssn:"<<ssn<<"\n"<<"\nGross Sales:"<<sales<<"\nCommission Rate:"<<comrate;
         }

 } ;

 class baseplus_employee:public commission_employee
 {
     private: float base=300;
        public:void earnings()
            {
                cout<<"SALARY:";
                cout<<(base+(comrate*sales));
            }
        void print()
         {
             cout<<"\nTYPE=\"Base Plus Commission Employee\"\n"<<"FirstName:"<<fname<<"\nLastName:"<<lname<<"\nssn:"<<ssn<<"\n"<<"Base Salary:"<<base<<"\nGross Sales:"<<sales<<"\nCommission Rate:"<<comrate;
         }

 } ;

 main()
 {
    employee *p;
    salaried_employee s;
    p=&s;
    p->earnings();
    p->print();
    hourly_employee h;
    p=&h;
    p->earnings();
    p->print();
    commission_employee c;
    p=&c;
    p->earnings();
    p->print();
    baseplus_employee b;
    p=&b;
    p->earnings();
    p->print();




 }
