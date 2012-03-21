#include<iostream>
using namespace std;


long long bigmod(long long b,long long p,long long m)
{
b%=m;
if(p==0) return 1;
else if((p%2)==0) 
{
long r1=bigmod(b,(p/2),m);
return ( (r1*r1) %m );
}

else return ( ((b%m) * bigmod(b,p-1,m)) %m );     

}


int main()
{
 long long b,p,m,r;
 while(cin>>b>>p>>m)
 {
 if(b%m ==0 ) r=0;
 else r=bigmod(b,p,m);
 cout<<r<<endl;   
}
 
    return 0;
}
