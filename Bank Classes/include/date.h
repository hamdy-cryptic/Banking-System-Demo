#include <iostream>
using namespace std;
class date
{
protected:
    int day;
    int month;
    int year;
public:
    date(int d=1,int m=1, int y=2020){
        if (d<32 && d>0 &&m>0 &&m<13 &&y>0)
           {

            day=d;month=m;year=y;}
        else
            {cout<<"error in date inputs";
            }}
    void print_date(){cout<<day<<"/"<<month<<"/"<<year<<endl;}
};


