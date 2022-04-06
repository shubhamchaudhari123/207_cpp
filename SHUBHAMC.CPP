#include<iostream.h>
#include<conio.h>
class demo
{
       private:
	       int count;
       public:
	       demo();
	       void print();
};
void demo::demo()
{
      cout<<"constuctor called"<<endl;
      count=0;
}
void demo::print()
{
      cout<<count<<endl;
}
void main()
{
      clrscr();
      demo d;
      d.print();
      demo d1;
      d1.print();
      demo d2;
      d2.print();
      getch();
}