#include<stdio.h>

int main()
{
int n,k,sum;    
    while( (scanf("%d",&n)!=EOF)&&(n>0) )
                              {
                              sum=0;
                              while(n>0)
                                        {
                                        n--;
                                        scanf("%d",&k);
                                        if(k>0) { if(sum>0) printf(" "); sum++; printf("%d",k); }
                                        }
                              if(sum==0) printf("0"); 
                              printf("\n");
                              }
return 0;        
}
