#include<iostream>
#include<queue>
#include<vector>
using namespace std;
#define MAX 1002
#define MAXI 1000000000

struct cell{
int dis;
int x,y;
};

bool cellCmp(cell X, cell Y)
{
return (X.dis<Y.dis);
}

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
	{
int m,n;
cin>>m>>n;
int field[MAX][MAX],dis[MAX][MAX];
bool(*cmp)(cell,cell) = cellCmp;

priority_queue<cell, vector<cell>, bool(*)(cell, cell)> dis(cmp);
for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		{ 
		cin>>field[i][j];
		/*if(i==0 && j==0) dis[i][j]=field[i][j];
		else if(i==0) dis[i][j] = field[i][j]+dis[i][j-1];
		else if(j==0) dis[i][j] = field[i][j]+dis[i][j-1];
		else */
		cell c1;
		c1.x = i; c1.y = j; 
		if(i==0&&j==0) c1.dis = 0;
		else c1.dis = MAXI;
		dis.push(c1);
		dis[i][j] = c1.dis;
		}	
	}

return 0;
}

