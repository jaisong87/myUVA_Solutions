#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define MAX 10003
bool prime(long x)
{
if(x%2 == 0) return false;
for(long i=3;i<=sqrt(x);i+=2) if(x%i == 0) return false;
return true;
}


int main()
{
double primes,tot,p;
int a,b;
long val;

bool sieve[MAX];
for(int n=0;n<MAX;n++)
		{
		val=n*(n+1)+41;
		if(prime(val)) sieve[n]=true;
		else sieve[n]=false;
		}
//printf("Done..\n");

while(scanf("%d %d",&a,&b)!=EOF)
	{
	primes=tot=0;
	for(int k=a;k<=b;k++)
		{
		if(sieve[k]) primes++;
		tot++;
		}

        p=(100*primes)/tot;
	p+=(1e-7);
	printf("%.2f\n",p);
     	}
return 0;
}



