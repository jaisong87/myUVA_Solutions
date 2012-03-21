#include<iostream>
#include<string>
using namespace std;
#define MAX 101


void mark(char arr[MAX][MAX],int i,int j,int m,int n)
{
   
arr[i][j]='*';

for(int a=-1;a<=1;a++)
        for(int b=-1;b<=1;b++)
                {
                if( ((i+a)>=0)&&((i+a)<m)&&((j+b)>=0)&&((j+b)<n) )              
                    if(arr[i+a][j+b]=='@') mark(arr,i+a,j+b,m,n);
                }
return;
}
     
int main()
{
    
char arr[MAX][MAX];    
  int m,n,depos;  
    
    while( (cin>>m>>n)&&(m)&&(n) )
                    {
    for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                    cin>>arr[i][j];
    
    depos=0;
    
    for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                    if(arr[i][j]=='@') { depos++; mark(arr,i,j,m,n); }
    
    cout<<depos<<endl;
                    }
    
return 0;
}
