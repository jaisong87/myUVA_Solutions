//Power crisis
#include<iostream>
using namespace std;

int power(int m,int a)
{
    int * mat=new int[m];
    for(int x=0;x<m;x++) 
    mat[x]=0;
    
    int count,tc,pos;
    count=0;tc=0;
    pos=0;
    mat[0]=-1;
    
    while(count!=(m-2))
    {
                       tc=1;
        while(tc!=a)
        {
        if(mat[pos]==0) {tc++;}
        pos++; 
        pos=(pos%m);
        }
    while(mat[pos]==-1) pos=(pos+1)%m;
    mat[pos]=-1;  
    count++;
    }
    for(int x=0;x<m;x++)
    {
    if(mat[x]!=-1) return (x+1);
    }
    
    return -1;
    }

int main()
{int m;
while(cin>>m)
{
             if(m==0) break;
             else
             {    
    for(int i=1;i<=m;i++)
    if(power(m,i)==13) {cout<<i<<endl;i=m+1;}
             }
}
return 0;
}
