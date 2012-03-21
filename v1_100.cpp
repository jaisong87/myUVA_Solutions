////////////////////////
//ScrewJack's solution /
//for (3n+1)problem    /
//vol1:problem.100     / 
//kbjtpo@gmail.com     /
////////////////////////
#include<stdio.h>

int cyc_len(int n)
{
    int count=1;
    while(n!=1)
    {
               while(n%2==0) {n/=2;count++;}
               if(n%2==1&&n!=1){n*=3;n++;count++;}
    }          
    return count;
}

int main()
{
    int i,j,p,q,count=0;
    while(scanf("%d %d",&i,&j)==2)
      {
       if(i<j){p=i;q=j;}
       else {p=j;q=i;}
       count=0;
       for(int a=p;a<=q;a++)
       if(cyc_len(a)>count) count=cyc_len(a);
      
       printf("%d %d %d\n",i,j,count);
       } 
    scanf("%d",&p);   
    return 0;   
    }
