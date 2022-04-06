#include<iostream.h>
#include<conio.h>
class demo
{
      private:
	      int a,b,c;
      public:
	      demo(int x, int y);
	      void print();
	      void add();
};
void demo::demo(int x, int y)
{
     a=x;
     b=y;
}
void demo::print()
{
     cout<<"value of x:->"<<a<<endl;
     cout<<"value of y:->"<<b<<endl;
}
void demo::add()
{
      c=a+b;
      cout<<"addtion of :->"<<c<<endl;
}
void main()
{
     clrscr();
     demo d(10,20);
     d.print();
     d.add();
}



