#include<iostream>
#include<iomanip>
using namespace std;
#define MAXN 26
#define MAXX 160

unsigned long long GCD(unsigned long long A, unsigned  long long B)
{
unsigned long long T;
if(A<B) {
	T = A; A = B; B = T;
}
if( B == 0)
	return A;
else return GCD(B, A%B);
} 

int main()
{
unsigned long long dp[MAXN][MAXX];
for(int i=0;i<MAXN;i++)
	for(int j=0;j<MAXX;j++) 
		dp[i][j] = 0;

dp[0][0] = 1;
for(int i=1;i<MAXN;i++) dp[i][0] = dp[i-1][0]*6;

for(int i=1;i<MAXN;i++)
	{
		for(int j = 1; j < MAXX; j++)
			{
			dp[i][j] += (j>1)?dp[i-1][j-1]:dp[i-1][0];
			dp[i][j] += (j>2)?dp[i-1][j-2]:dp[i-1][0];
			dp[i][j] += (j>3)?dp[i-1][j-3]:dp[i-1][0];
			dp[i][j] += (j>4)?dp[i-1][j-4]:dp[i-1][0];
			dp[i][j] += (j>5)?dp[i-1][j-5]:dp[i-1][0];
			dp[i][j] += (j>6)?dp[i-1][j-6]:dp[i-1][0];
			}
	}

/*
for(int i=0;i<5;i++,cout<<endl)
	for(int j=1;j<10;j++)
		cout<<setw(10)<<dp[i][j];
*/
int n,x;
unsigned long long A,B, C;
while(cin>>n>>x &&n) { 
		A = dp[n][x];
		B = dp[n][0];
		C = GCD(A,B);
		A/=C; B/=C;
		cout<<A;
		if(B>1) cout<<"/"<<B;
		cout<<endl;
			}
return 0;
}
