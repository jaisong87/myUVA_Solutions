#define MAX 100
#include<stdio.h>
using namespace std;

void fact(int n)
{
printf("%3d! = ",n);
         int j=2,k=0;
         int temp;
int x=0,count=0; 
int fact[MAX]={0};
  for(x=2;x<=n;x++)
         {
         
         j=2;
         temp=x;
         while(temp!=1)
                       {
              while(temp%j == 0) { temp/=j; fact[j]++; }
              j++;
                       }               
         }   
  count=0;
  for(k=0;k<MAX;k++) if(fact[k]) { if(count==15) { count=0; printf("\n       "); } printf("%3d",fact[k]); count++; }
   printf("\n");
return;
}

int main()
{
    
    int n;
    while((scanf("%d",&n))&&n) fact(n);
    return 0;    
}
