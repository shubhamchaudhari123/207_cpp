#include<iostream.h>
#include<conio.h>
class emp
{
private:
char name[20],dept[40],add[40],gen[7];
int sal,age;
public:
void get();
void put();
};
void emp::get()
{
cout<<"name of employed\n";
cin>>name;
cout<<"name of department\n";
cin>>dept;
cout<<"enter the address of employed\n";
cin>>add;
cout<<"salary of employed\n";
cin>>sal;
cout<<" age of employed\n";
cin>>age;
cout<<"enter gender employed\n";
cin>>gen;
cout<<"\n\n";
}
void emp::put()
{
cout<<"\n name\t"<<name<<"\ndepartment\t"<<dept<<"\nage\t"<<"\naddress\t"<<add<<"\nsalary\t"<<sal<<"\ngender\t"<<gen;
}
void main()
{
clrscr();
int i,no;
//cout<<"enter number of employed";
//cin>>no;
//emp e[no];
cout<<"enter detail of three employed\n";
emp e[3];
for(i=0;i<3;i++)
{
e[i].get();
clrscr();
}
cout<<"\n\tdetail of three employed\n\n";
for(i=0;i<3;i++)
{
e[i].get();
cout<<"\n";
}
getch();
}