
#include<iostream.h>
#include<conio.h>
class demo
{
      private:
	      int a,b;
      public:
	      demo(int x, int y);
	      demo(demo &m);
	      void print();
};
demo::demo(int x, int y)
{
      a=x;
      b=y;
}
void demo::demo print()
{
      cout<<"value of a:->"<<a<<endl;
      cout<<"value of b:->"<<b<<endl;
}
demo::demo(demo &m)
{
      a=m.a;
      b=m.b;
}
void main()
{
      clrscr();
      demo d(20,20)
      d.print();
      demo d1(d);
      d.print();

      getch();
}