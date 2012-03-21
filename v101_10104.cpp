#include<iostream>
#include<conio.h>
using namespace std;

void ex_euclid(long long  a,long long  b,long long &d,long long &x,long long &y)
{
        
     if(b==0){d=a;x=1;y=0;
     }
     else 
     {
      long long d1,x1,y1;
      d1=d;x1=x;y1=y;
      ex_euclid(b,a%b,d1,x1,y1);    
      d=d1;x=y1;y=x1-((a/b)*(y1));      
       }
       return ;
}

int main()
{
    long long a,b,x,y,d; 
    x=y=d=0;
    while(cin>>a>>b)
    {
                  if(a<b){  ex_euclid(b,a,d,x,y);
                    cout<<y<<" "<<x<<" "<<d<<endl;
                          }
                else{
                     ex_euclid(a,b,d,x,y);
                     cout<<x<<" "<<y<<" "<<d<<endl;
                     }               
     }
     return 0;
}



















