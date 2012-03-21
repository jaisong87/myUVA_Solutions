#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;
#define N 16

int myLog(int n)
{
return (n>0)?1+myLog(n>>1):0;
}

int main()
{
string player[N];
for(int i=0;i<N;i++) { 
	cin>>player[i];
	for(int j=player[i].size();j<10;j++) player[i]+=' ';
	}

float Pw[N][N];
for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	{ 
		cin>>Pw[i][j]; Pw[i][j]/=100; 
	}

int maxRound = myLog(N);
float Tw[N][1+maxRound];

for(int i=0;i<N;i++) Tw[i][0] = 1.0;

for(int i=0;i<N;i++)
	for(int j=1;j<1+maxRound;j++)
		Tw[i][j] = 0.0;


for(int j=1;j<1+maxRound;j++)
{
	for(int i=0;i<N;i++)
	{
		for(int k=i-(i%(1<<j)); k< ( i-(i%(1<<j))+(1<<j) );k++)	
			{
			bool H1, H2; H1 = H2 = false;
			int start = i-(i%(1<<j));
			if(i < start + (1<<(j-1))) H1 = true;
			else H2 = true;
			if(k < start + (1<<(j-1))) H1 = true;
                        else H2 = true;			

				if(i!=k && H1 && H2)
				{
				Tw[i][j] += Tw[i][j-1]*Tw[k][j-1]*Pw[i][k];
				}
			}
	}
}

for(int i=0;i<N;i++)
	printf("%s p=%1.2f%%\n", player[i].c_str(), 100.0*Tw[i][4] );
return 0;
}
