#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(vector<int> x,int n)
{
 int z=x.size();
 for(int i=0;i<z;i++) if(x[i]==n) return i;   
    return -1;
}

int main()
{
 vector<int> num,frq;   
    int n,pos;
    
    while(cin>>n)
                   {
                   if((pos=find(num,n))==-1 ) { num.push_back(n); frq.push_back(1);  }
                   else frq[pos]++;
                   }
    int z=num.size();
    for(int a=0;a<z;a++) cout<<num[a]<<" "<<frq[a]<<endl;
    
    return 0;
}
