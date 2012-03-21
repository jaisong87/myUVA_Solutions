#include<stdio.h>
#define MAX 1000001

int main()
{
char sieve[MAX+1];
int strike=2,i=0,n;
for(i=0;i<MAX;i++) sieve[i]=0;
sieve[1]=-1;

strike=2;

update:
while(strike<(MAX/2) )
	{
	//printf("Strike is:%d\n",strike);
	i=2;
	while((i*strike)<MAX)
		{
		sieve[strike*i]=-1;
		i++;
		}
	i=strike+1;
	while(i<MAX && sieve[i]!=0) i++;
	strike=i;
	}


while( (scanf("%d",&n)) &&(n) )
	{
	printf("%d:\n",n);
	for(i=1;i<=(n/2);i++)
			{	 
			if(sieve[i]==0 && sieve[n-i]==0 ) 
				{
				printf("%d+%d\n",i,n-i);
				i=(n+11);
				}
			}
	if(i<n || n==1 ) printf("NO WAY!\n");
	}

return 0;
}


