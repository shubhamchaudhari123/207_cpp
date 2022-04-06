#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	     int x;
	public:
	demo()//default
	{
		cout<<"\t the constructor with no parameter";
	}
	demo(int a)//parameterized
	{
	x=a;
	cout<<"\n\tconstruct with one parameter x="<<x;
	cout<<"\n\tsqure of x is"<<x*x;
	}
	demo(int a,int b)//parameterized
	{
	cout<<"\n\tconstructor with two parameter a ="<<a<<"b="<<b;
	cout<<"\n\taddition is a+b="<<a+b;
	}
	demo(int a,int b,int c)//parameterized
	{
	cout<<"\n\tconstructor with three parameter a="<<a<<"b="<<b<<"c="<<c;
	cout<<"\n\tadition is a+b+c="<<a+b+c;
	}
	demo(demo&d)//copy
	{
	cout<<"\n\t copy of costructor is x=d.x="<<d.x;
	x=d.x;
	cout<<"\n\t the copied costructor is"<<x;
	}
};
void main()
{
	clrscr();
	demo d1;
	demo d2(10);
	demo d3 (20,30);
	demo d4(20,30,40);
	demo d5(d2);
	getch();
}