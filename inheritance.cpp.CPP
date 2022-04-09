
#include<iostream.h>
#include<conio.h>
class A
{
     public:
	    void display()
	    {
		 cout<<"This is base"<<endl;
	    }
};
class B : public A
{
      public:
	    void display2()
	    {
		  cout<<"This is child"<<endl;
	    }
};
int main()
{
       clrscr();
       B B1;
       B1.display();
       B1.display2();

       getch();
       return 0;
}
