#include<stdio.h>
#define MAX 10001

int main()
{
char sieve[MAX+1];
int strike=2,i=0,n,n1;
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

scanf("%d",&n);
while(n>0)
	{
	scanf("%d",&n1);
	i=(n1/2)+1;
	while(sieve[i]==-1) i++;
	printf("%d\n",i);
	n--;
	}

return 0;
}


