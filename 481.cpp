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

cout<<setw(12)<<"Seq : ";
for(int i=0;i<z;i++)
        cout<<setw(4)<<seq[i]<<' ';
cout<<endl;


cout<<setw(12)<<"Wt :";
for(int i=0;i<z;i++)
        cout<<setw(4)<<Wt[i]<<' ';
cout<<endl;

cout<<setw(12)<<"Prev : ";
for(int i=0;i<z;i++)
        cout<<setw(4)<<prev[i]<<' ';
cout<<endl;

cout<<setw(12)<<" b : ";
for(int i=0;i<b.size();i++)
        cout<<setw(4)<<b[i]<<' ';
cout<<endl;

cout<<setw(12)<<" bestWt : ";
for(int i=0;i<z;i++)
        cout<<setw(4)<<bestWt[i]<<' ';
cout<<endl;


int tx = b.back();
for(int i=0;i<b.size();i++)
        {
        cout<<seq[tx]<<' ';
        tx = prev[tx];
        }
cout<<endl<<"-------------------------------------------------"<<endl;

long long best = bestWt[0];
for(int i=1;i<z;i++)
	if(bestWt[i] > best) best = bestWt[i];
return best;
}

int main()
{


	vector<int> A,W;
	int tmp; 
		
		while(cin>>tmp)
			{ 
				A.push_back(tmp);
				W.push_back(1);
			}

long long btWt1 = wtLis(A, W);
cout<<btWt1<<endl;

return 0;
}
