#define MAX 1000000
#include<iostream>
using namespace std;

long ncr(int n,int r)
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
long val=1;
for(int x=2;x<MAX;x++)
        {
       for(int y=0;y<fact[x];y++) val*=x;
        }
return val;
}

int main()
{
    
    int n,r;
    while((cin>>n>>r)&&(!(n==0&&r==0)))   cout<<ncr(n,r)<<endl;
/*   
int x=1;
for(int a=0;a<30;a++) x*=2;
x=x-1+x;
     cout<<x<<endl;
*/
return 0;    
}

