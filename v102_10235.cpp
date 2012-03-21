#include<iostream>
#include<cmath>
using namespace std;

int rev(int n)
{
    int r=0;
    while(n!=0)
    { r=r*10+n%10;n/=10;}
return r;
}

int prime(int x)
{
    if(x==1||x==2||x==3) return 0;
    if(x%2 == 0) return -1;
    for(int i=3;i<=(sqrt(x)+1);i+=2)
    if(x%i==0) return -1;
    return 0;
}

int main()
{
    int n;
    while(cin>>n)
    {
    if(prime(n)==-1) cout<<n<<" is not prime."<<endl;             
    else 
         {
         if( (prime(rev(n))==0)&&(n!=rev(n)) ) cout<<n<<" is emirp."<<endl;
         else cout<<n<<" is prime."<<endl;
         }    
    }
    return 0;
}
