#include<iostream>
#include<vector>
#define MAX 25
#define maxi(a,b) ((a>b)?(a):(b))
using namespace std;


int LCS(vector<int> v1,vector<int> v2)
    {
    int l=v1.size();                
    int m=v2.size();
        int seq[MAX][MAX];
    for(int i=0;i<MAX;i++)  seq[i][0]=seq[0][i]=0;                
      
      for(int i=1;i<l;i++)
              for(int j=1;j<m;j++)              
                    {
                    if(v1[i]==v2[j]) seq[i][j]=1+seq[i-1][j-1];
                    else seq[i][j]=maxi(seq[i-1][j],seq[i][j-1]);
                    }
    return seq[l-1][m-1];
    }
    
    
int main()
{
int n,temp;    
    cin>>n;
    vector<int> q;
    for(int a=0;a<(n+1);a++) q.push_back(0);
    
    for(int i=0;i<n;i++) { cin>>temp; q[temp]=i;  }
                           
    while(cin>>temp)
                    {    
                    vector<int> ans;
                    for(int a=0;a<(n+1);a++) ans.push_back(0);
                    
                    ans[temp]=0;
                    for(int i=1;i<n;i++) { cin>>temp; ans[temp]=i; }
                    cout<<LCS(q,ans)<<endl;
                    }
return 0;
}

    
