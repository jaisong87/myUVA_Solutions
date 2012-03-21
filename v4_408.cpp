//STEP MOD problem
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int * a,cnt=0;
    long mod,step,seed,count;
    int flag=0;char *s;
    while(scanf("%d %d",&step,&mod)!=EOF )
     {
     if(cnt>0) { printf("\n"); } cnt++; 
     count=1;flag=0;
     a=new int[mod];
     
     for(int i=0;i<mod;i++)
     a[i]=-1;
   
     seed=0;a[0]=0;  
     while(count!=mod)
     {
     seed=(seed+step)%mod;
     a[seed]=0;
     count++;
     }       
     
     for(int i=0;i<mod;i++)
     { if(a[i]==-1) {flag=1;}  }
   
     if(flag==0) s="Good Choice";
     else s="Bad Choice";
        
     printf("%10d%10d    %s\n",step,mod,s); 
     delete a;          
     }
	printf("\n");
    return 0;
}

