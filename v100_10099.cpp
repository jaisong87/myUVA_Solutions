#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int dis[120];
#define INFI (1<<30)
#define MIN(a, b) (((a)<(b))?(a):(b))

bool visited[120];

int main()
{
int V, E;
int sc = 1;

while(cin>>V>>E && V && E)
	{
int u, v, w;
int s, t, n;

vector< vector<pair<int, int> > > adjList;
vector< pair<int, int> > emptyList;
for(int i=0;i<V;i++)
	{
	adjList.push_back(emptyList);
	dis[i] = 0;
	visited[i] = false;
	}

for(int e=0;e<E;e++)
	{
		cin>>u>>v>>w;
		u--; v--;
		adjList[u].push_back(pair<int,int>(v,w));
		adjList[v].push_back(pair<int,int>(u,w));	
	}

cin>>s>>t>>n;
s--; t--; 

priority_queue<pair<int, int> > myq;
dis[s] = INFI;
myq.push(pair<int, int>(dis[s], s));

while(! myq.empty())
	{
pair<int, int> qtop;
qtop = myq.top();
myq.pop();
int edgeU = qtop.second;
int curdis = qtop.first;

//cout<<" Popped edge#"<<edgeU<<" with dis "<<curdis<<endl;
if(!visited[edgeU])
	{
	visited[edgeU] = true;
	for(int j=0;j<adjList[edgeU].size();j++)
		{
			pair<int, int > edge = adjList[edgeU][j];
			int edgeV = edge.first;
			int wtW = edge.second;
			if( !visited[edgeV] && dis[edgeV] < MIN(wtW, curdis))
				 {
				dis[edgeV] = MIN(wtW, curdis);
				//cout<<"Setting dis["<<edgeV<<"] = "<<dis[edgeV]<<endl;
				myq.push(pair<int, int> (dis[edgeV], edgeV));
				}
		}
	}
}
adjList.clear();
//cout<<dis[t]<<endl;

int minTrips = n/(dis[t]-1);
if(n%(dis[t]-1) ) minTrips++;

cout<<"Scenario #"<<sc<<endl;
cout<<"Minimum Number of Trips = "<<minTrips<<endl<<endl;;
sc++;
}

}
