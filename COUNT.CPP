#include<iostream.h>
#include<conio.h>
class demo
{
       private : int count;

       public:
	       void init();
	       void put();
	       void inc();
};
void demo::init()
{
   count=0;
}
void demo::put()
{
  cout<<count<<endl;
}
void demo::inc()
{
   count++;
}
void main()
{
  clrscr();

  demo fybca;
  fybca.init();
  fybca.put();
  fybca.inc();
  fybca.put();

 getch();
}
