 #include<iostream>
 using namespace std;
 void exchange(int m,int n);
 int main()
 {
     int a,b;
     cout<<"enter the value of a and b before swapping"<<endl;
     cin>>a>>b;
     cout<< "value of a and b before swapping";
     cout <<a<<endl<<b<<endl;
     exchange(a,b);
     cout<< "value of a and b after swapping";
     cout<<a<<endl<<b<<endl;
     return 0;
 }
 void exchange(int m,int n)
 {
     int temp;
     temp=m;
     m=n;
     n=temp;
         
 }
 
 
