#include<iostream>
using namespace std;

int main()
{
 int sum[100][100];
 int n,s,large=0;
 while(cin>>n)
              {
//enter
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{ cin>>sum[i][j];sum[i][j]+=(i!=0)*(sum[i-1][j])+(j!=0)*(sum[i][j-1])-(i!=0)*(j!=0)*(sum[i-1][j-1]);}

//start process        
 large=sum[0][0];       
for(int a=0;a<n;a++)
for(int b=0;b<n;b++)     
 for(int c=0;c<a;c++)       
  for(int d=0;d<b;d++)           
  { s=sum[a][b];
  s-=(c!=0)*(sum[c-1][b]);
  s-=(d!=0)*(sum[a][d-1]);
  s+=(c!=0)*(d!=0)*(sum[c-1][d-1]);
  if(s>large) large=s;
  }
//process
    cout<<large<<endl;
              }     

}
