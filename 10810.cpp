#include<iostream>
#include<vector>
using namespace std;
bool dbg = false; //true;

vector<int> invCount(vector<int> V, unsigned long long& C)
{
//if(dbg) cout<<" invCount  with V size "<<V.size()<<endl;
if(V.size()<=1) return V;

int z = V.size();
vector<int> L(V.begin(), V.begin()+z/2);
vector<int> R(V.begin()+z/2, V.end());

vector<int> sL = invCount(L,C);
vector<int> sR = invCount(R,C);
vector<int> sT;

int zL, zR, pL, pR;
pL = pR = 0;
zL = sL.size();
zR = sR.size();

while(pL<zL && pR<zR)
	{
	if(sR[pR] < sL[pL]) { sT.push_back(sR[pR]); 
	C+=(zL-pL); 
	//cout<<"Adding to C "<<zL-pL<<endl;
	pR++;  
	} 
	else { sT.push_back(sL[pL]); pL++; }
	}

while(pL < zL ) { sT.push_back(sL[pL]); pL++;  }
while(pR < zR) { sT.push_back(sR[pR]); pR++; }

return sT;
}


int main()
{
int N, temp;
vector<int> V;

while(cin>>N && N)
{
V.clear();
 while(N--) { cin>> temp;  V.push_back(temp); }
if(dbg) 
	{
	for(int i=0;i<V.size();i++)
		cout<<V[i]<<" ";
	cout<<endl;
	}
unsigned long long C = 0;
vector<int> W = invCount(V, C);

if(dbg)
        {
        for(int i=0;i<W.size();i++)
                cout<<W[i]<<" ";
        cout<<endl;
        }

cout<<C<<endl;
}


return 0;
}
