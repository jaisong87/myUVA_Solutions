#include<iostream>
using namespace std;
#define MAX 800000
long long dp[MAX];

int main()
{
int den[] = { 1, 5, 10, 25, 50 };
dp[0] = 1;
for(int i=1;i<MAX;i++) dp[i] = 0;

for(int i=0;i<5;i++)
	for(int j=den[i];j<MAX;j++)
		{
		dp[j] += dp[j-den[i]];
		}
int n;
while(cin>>n)
	{ 
	if(dp[n]==1) cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl; 
	else cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change."<<endl;
	}
return 0;
}
