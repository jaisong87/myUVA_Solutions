#include<iostream>
using namespace std;

long long f(long long p)
     {
          long long val=0;
          int i;
          while(p)
                  {
                  i=p%10;
                  p/=10;
                  val+=p*45;
                  val+=i*(i+1)/2;               
                  }
          return val; 
     }
     
int main()
{
long long p,q,t;
long long val1,val2;
   while( (cin>>p>>q)&&(p>=0)&&(q>=0) ) 
          {
          if(p>0) p--;
          cout<<f(q)-f(p)<<endl;
          }
// system("pause");
    return 0;
}
