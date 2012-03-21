#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define INF 1000000000

int main()
{

string S1, S2;
while(cin>>S1 && S1 != "#")
{
cin>>S2;
int m = S1.length();
int n = S2.length();

int ** dis = new int*[m+1];
for(int i = 0 ;i<=m ;i++)
	dis[i] = new int[n+1];

for(int i=0;i<=m;i++) dis[i][0] = i;
for(int j=0;j<=n;j++) dis[0][j] = j;


for(int i = 1 ; i <= m ; i++)
	for(int j = 1; j<=n;j++)
		{		
		dis[i][j] = INF;
		dis[i][j] = min(dis[i][j], dis[i-1][j-1] + (S1[i-1] != S2[j-1]) ); 		
		
		dis[i][j] = min(dis[i][j], dis[i][j-1] + 1);
		dis[i][j] = min(dis[i][j], dis[i-1][j] + 1);
		//cout<<dis[i][j]<<" ";
		}
		
vector<int> Vp;
vector<char> cmd, Ch;
char op;
int tx, ty, ix, iy;
tx = m; ty = n;

	while( tx != 0 || ty != 0 )
	{
		ix = tx; iy =ty;
		if(tx>0) {
			   ix = tx - 1;
                       	   iy = ty;
			   op = 'D';  
			}		
		if( ty > 0 && dis[tx][ty-1] <= dis[ix][iy] )
			{
				ix = tx; iy = ty -1;
			   op = 'I';
			}
		if( tx > 0 && ty > 0 && dis[tx-1][ty-1] <= dis[ix][iy])
			{
			  ix = tx -1 ; iy = ty -1 ;
			  op = 'C';
			}
	if( dis[ix][iy] != dis[tx][ty]) 
		{
		cmd.push_back(op);
		if( op == 'C' || op == 'I') { Ch.push_back(S2[ty-1]); Vp.push_back(ty); } 
		else { Ch.push_back(S1[tx-1]); Vp.push_back(tx); }
		}
	tx = ix; ty = iy;
	}

//cout<<"Edit Distance is "<<dis[m][n]<<endl;
int z = cmd.size();
for(int i = 0 ; i< z;i++)
	{
	cout<<cmd[z-1-i]<<Ch[z-1-i];
	if(Vp[z-1-i]<10) cout<<"0";
	cout<<Vp[z-1-i];
	}
cout<<endl;
}
return 0;
}
