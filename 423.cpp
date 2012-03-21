#include<iostream>
#include<iomanip>
#include<sstream>
#include<climits>
using namespace std;
#define MAX 102

int main()
{
int n;
while(cin>>n)
	{
long long adjMat[MAX][MAX];
for(int i=0;i<n;i++)
	for(int j=0;j<MAX;j++)
		{
		adjMat[i][j] = 1000000000;		
		if(i==j) adjMat[i][j]=0;
		adjMat[i][j]*= 1000000000;
		}

for(int i=1;i<n;i++)
	{
	string dis;
	for(int j=0;j<i;j++)
		{
		cin>>dis; //cout<<dis<<" "<<i<<" "<<j<<endl;
		if(dis!="x") 
			{	
			stringstream ss1(dis);
			ss1>>adjMat[i][j];
			adjMat[j][i] = adjMat[i][j];
			}
		}
	}

/*
//print adjMat
for(int i=0;i<n;i++,cout<<endl)
	for(int j=0;j<n;j++)
		cout<<setw(10)<<adjMat[i][j];
*/

long long floydMat[MAX][MAX];
for(int i=0;i<n;i++)
        for(int j=0;j<MAX;j++)
		{
                floydMat[i][j] = adjMat[i][j]; 
		}
/*
cout<<"============ All shortest Paths ================ "<<endl;
for(int i=0;i<n;i++,cout<<endl)
        for(int j=0;j<n;j++)
                cout<<setw(10)<<floydMat[i][j];
*/

for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		for(int k=0;k<n;k++)
			{
			if(floydMat[i][k] > floydMat[i][j] + floydMat[j][k])
				floydMat[i][k] = floydMat[i][j]+floydMat[j][k];
			}	
/*
//print floydMat
cout<<"============ All shortest Paths ================ "<<endl;
for(int i=0;i<n;i++,cout<<endl)
	for(int j=0;j<n;j++)
		cout<<setw(10)<<floydMat[i][j];
*/

long long ans = floydMat[0][0];
for(int i=1;i<n;i++)
	ans = max(ans, floydMat[0][i]);
cout<<ans<<endl;
	}
return 0;
}
