#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
bool dbg = false;

long long wtLis(vector<int> seq, vector<int> Wt)
{
int z = seq.size();
vector<int> prev(z,-1);
vector<long long> bestWt(z,0);

int u,v;

vector<int> b;
b.push_back(0); //best sequence that ends in pos 0 as of now is the first element
prev[0] = -1; //No prev for 0th element
bestWt[0] = Wt[0];

for(int i=1;i<z;i++)
	{
		if(seq[i] > seq[b.back()]) { 
					prev[i] = b.back();
					b.push_back(i);
					bestWt[i] = (long long)Wt[i] + bestWt[prev[i]];
					continue;
					}
		
		for(u=0, v=b.size(); u<v;)
			{
				int w = (u+v)>>1;
				if(seq[b[w]] < seq[i]) u = w + 1;
				else v = w;
			}
		
		//cout<<i<<" "<<u<<" "<<seq[i]<<" "<<seq[u]<<endl;
	
		if(seq[i] <= seq[b[u]] && Wt[i] > Wt[b[u]] )
			{
				long long Pw = 0;
				
				if(u>0)  { 
					prev[i] = b[u-1];
					Pw = bestWt[prev[i]];
					}
				else prev[i] = -1;
				
				bestWt[i] = (long long)Wt[i] + Pw;
				b[u] = i;
			}
		/*
		u--;
		if(u<b.size() && seq[i] == seq[b[u]] && Wt[i] > Wt[b[u]])
			{
				prev[i] = b[u-1];
				bestWt[i] = Wt[i] + bestWt[prev[i]];
				b[u] = i;
			}
		*/	
	}

long long best = bestWt[0];
for(int i=1;i<z;i++)
	if(bestWt[i] > best) best = bestWt[i];
return best;
}

int main()
{
int C;
cin>>C;
for(int i=1;i<=C;i++)
	{
	vector<int> A,W;
	int N, tmp; cin>>N;
	for(int j=0;j<N;j++)	
		{
		cin>>tmp;
		A.push_back(tmp);
		}

	       for(int j=0;j<N;j++)
                {
                cin>>tmp;
                W.push_back(tmp);
                }	

long long btWt1 = wtLis(A, W);
for(int j=0;j<A.size();j++) A[j]*=-1;
long long btWt2 = wtLis(A,W);
cout<<"Case "<<i<<".";
if(btWt1 >= btWt2)
	cout<<" Increasing ("<<btWt1<<"). Decreasing ("<<btWt2<<")."<<endl;
else  cout<<" Decreasing ("<<btWt2<<"). Increasing ("<<btWt1<<")."<<endl;
	}

return 0;
}
