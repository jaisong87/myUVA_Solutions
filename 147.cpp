#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
#define MAX 300000
long long dp[MAX];

int main()
{
int den[11] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
dp[0] = 1;
for(int i=1;i<MAX;i++) dp[i] = 0;

for(int i=0;i<11;i++)
	for(int j=den[i];j<MAX;j++)
		{
		dp[j] += dp[j-den[i]];
		}
double n;
while(cin>>n && n>0)
	{ 	if(n<100) cout<<' ';
		if(n<10) cout<<' ';
		printf("%.2f",n);
		cout<<setw(17)<<dp[int(100*n)]<<endl;
		}
return 0;
}
