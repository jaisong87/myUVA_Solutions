#define MAX 100
#include<iostream>
using namespace std;

int ncr(int n,int r)
{
int a,b;    
if((n-r)>r) { a=n-r; b=r; }
    else { b=n-r; a=r; }
    
  char fact[MAX]={0};  
 
 for(int x=a+1;x<=n;x++)
         {
         int j=2;
         int temp=x;
         while(temp!=1)
                       {
              while(temp%j == 0) { temp/=j; fact[j]++; }
              j++;
                       }               
         }   
 for(int x=2;x<=b;x++)
         {
         int j=2;
         int temp=x;
         while(temp!=1)
                       {
              while(temp%j == 0) { temp/=j; fact[j]--; }
              j++;
                       }               
         }
int val=1;
for(int x=2;x<MAX;x++)
        {
       for(int y=0;y<fact[x];y++) val*=x;
        }
return val;
}

int main()
{
    
    int n,r;
    while((cin>>n>>r)&&n&&r)   cout<<n<<" things taken "<<r<<" at a time is "<<ncr(n,r)<<" exactly."<<endl;
return 0;    
}
