#include<stdio.h>

int cut(int m,int n)
{
if(n==1) return (m-1);
    else return (m-1)+(m*cut(n,1));
}

int main()
{
    
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
                    {
                    if(m<n) m^=n^=m^=n;
                  printf("%d\n",cut(m,n));
                     }
    return 0;
}
