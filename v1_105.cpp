#include<iostream>
using namespace std;

int main()
{
    int height[10000]={0};
    int l,r,h,max=0;   
    while(cin>>l>>h>>r)
    {
    if(r>max) max=r;
    for(int i=l;i<r;i++)
    if(height[i]<h) height[i]=h;
    }
  
  int th=height[0];  
  for(int i=1;i<=max;i++)  
    {if(height[i]!=th) {th=height[i]; if(i-1) cout<<" "; cout<<i<<" "<<th; }
          }
      cout<<" ";    
    return 0;
}
                       
                       
                       
                       
                       
                       
                       
                       
