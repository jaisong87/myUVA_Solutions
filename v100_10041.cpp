#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tot=0;
    cin>>tot;
    while(tot>0) 
    {
    tot--;
    int n,n1,sum;
    sum=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
      { cin>>n1; v.push_back(n1);  }
     //////////////////////
     int d=0,min=0;
    d=min=0;
    //cout<<"Case : "<<tot<<endl;
    for(int b=0;b<n;b++)
                  {
    if(v[b]>v[0]) min+=(v[b]-v[0]);
                  else min+=(v[0]-v[b]);
                  }
    //cout<<"Minimum:"<<min<<endl;
    for(int a=0;a<n;a++)
            {
            d=0;
         for(int i=0;i<n;i++)
                 {               
    if(v[a]>v[i]) d+=(v[a]-v[i]);
                  else d+=(v[i]-v[a]);
                  }
          //cout<<"D is:"<<d<<endl;
          if(min>d) min=d;        
                 }
   cout<<min<<endl;
    }

return 0;    
}
