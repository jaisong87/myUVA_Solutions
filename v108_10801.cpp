#include<iostream>
#include<set>
#include<sstream>
#include<cmath>
#include<queue>
using namespace std;
#define INFI (1<<30)

/***********Input************
 * 100 floors 0-99
 * n k
 * T1 T2 T3 ... Tn
 * line1...till lineN
 * *************************/


int main()
{
int n, k;
int dis[101];
bool visited[101];
int T[10];
while(cin>>n>>k)
	{ 
	for(int i=0;i<101;i++) 
		{
		dis[i] = -1*INFI;
		visited[i] = false;
		}

	for(int i=0;i<n;i++)
		cin>>T[i];
	
	set<int> stops[10];
	string stopFloors;
	getline(cin, stopFloors);

	for(int i=0;i<n;i++)
		{
			getline(cin, stopFloors);
			int tmp;
			stringstream ss1(stopFloors);
			while(ss1>>tmp)
				stops[i].insert(tmp);
		}
	dis[0] = 0;
	priority_queue< pair<int,int> > myq;	
		myq.push(pair<int, int> (dis[0], 0));
		while(!myq.empty())
			{
				pair<int, int> curBest = myq.top();
				int edgeU = curBest.second;
				int curDis = curBest.first;
				myq.pop();			
			
			if(!visited[edgeU])
			{
			visited[edgeU] = true;
				for(int i=0;i<n;i++)
					{
					if(stops[i].find(edgeU) != stops[i].end())
							{
						for(set<int>::iterator itr = stops[i].begin(); itr != stops[i].end();itr++)
								if( (*itr != edgeU) && !visited[*itr])
									{
							int edgeV = *itr;
							int wait = -60;
							if(edgeU == 0) wait = 0;
							if(dis[edgeV] < wait + curDis - T[i]*abs(edgeV-edgeU))
								{
								dis[edgeV] = wait + curDis - T[i]*abs(edgeV- edgeU);
								myq.push(pair<int,int>(dis[edgeV], edgeV));
								} 		
									}	
							}
					}
			}
			}
	int best = -1*dis[k];
	if(best == INFI)
		cout<<"IMPOSSIBLE"<<endl;
	else cout<<best<<endl;
	}
}
