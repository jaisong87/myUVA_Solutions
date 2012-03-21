#include<iostream>
using namespace std;

int main()
{
    int ls;
 for(int a=2;a<=200;a++)
         {   
         ls=a*a*a;
         for(int b=2;b<a;b++)   
                 for(int c=b+1;c<a;c++)
                         for(int d=c+1;d<a;d++)
                                 if(ls==(b*b*b+c*c*c+d*d*d) ) 
                                          cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
         }
 return 0;   
}
