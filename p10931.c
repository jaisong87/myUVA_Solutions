#include<stdio.h>

int main()
{
int parity,n1,i;
char str[65];

while( (scanf("%d",&n1))&& (n1) )
	{
parity=0;
i=0; 
	while(n1>0)
		{
		parity+=(n1%2);
		str[i]=(n1%2)+'0';
		i++;
		n1/=2;
		}
printf("The parity of ");
while(i>0) { i--; printf("%c",str[i]); }
printf(" is %d (mod 2).\n",parity);
	}
return 0;
}


