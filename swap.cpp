#include<iostream.h>
using namespace std;
class class1
{ 
int value1;
public:
void indata(int a)
{
  value1=a;
}
void display()
{
  cout<<value1<<endl;
}
friend void exchange(class1 &x ,class2 &y);
};
class class2
{
int value2;
public:
void indata(int a)
{
  value2=a;
}
void display()
{
  cout<<value2<<endl;
}
friend void exchange(class1 &x,class2 &y);
};
void exchange(class1 &x,class2 &y);
{
int temp;
temp=x.value1;
x.value1=y.value2;
y.value2=temp;
}
void main()
{
class c1;
class c2;
c1.indata(100);
c2.indata(200);
cout<<"value before exchange "<<endl;
c1.dispaly();
c2.display();
exchange(c1,c2);
cout<<"value after exchange"<<endl;
c1.display();
c2.display();
}
