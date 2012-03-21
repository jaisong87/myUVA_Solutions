#include<iostream>
using namespace std;

#define MAX 55


int main()
{  
   int cnt,n;
   long long wc[MAX];
   wc[0]=0; wc[1]=2; wc[2]=3;
       
       for(int x=3;x<MAX;x++) wc[x]=wc[x-1]+wc[x-2];
     cin>>cnt;
     
     for(int i=1;i<=cnt;i++)
             {
             cin>>n;
             cout<<"Scenario #"<<i<<":"<<endl<<wc[n]<<endl<<endl;
             }  
       
    return 0;
}



