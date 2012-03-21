#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
printf("PERFECTION OUTPUT\n");
int n;
while(cin>>n)
{ if(n==0) break;
             int sum=1;
 
if(n==1) printf("%5d  DEFICIENT\n",n);
else if (n==2)  printf("%5d  DEFICIENT\n",n);
     else
    {           
for(int i=2;i<=(n/2);i++)
if((n%i)==0)  sum+=i;

if(sum>n) printf("%5d  ABUNDANT\n",n);
if(sum<n)  printf("%5d  DEFICIENT\n",n); 
if(sum==n)printf("%5d  PERFECT\n",n);  
                       }

}                 
printf("END OF OUTPUT\n");
return 0;

}
