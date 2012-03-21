#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int happy(long x)
    {
    vector<long> v;
    v.push_back(x);
    long val=0;
    while(x) { val+=(x%10)*(x%10); x/=10; } 
    
    while(1)
            {
           if(val==1) return 0;
           if(find(v.begin(),v.end(),val)==v.end()) v.push_back(val);
           else return -1;
           x=val;                
           val=0;
           while(x) { val+=(x%10)*(x%10); x/=10; } 
          }
    return 0;
    }

int main()
{
    int count;
    long n;
    cin>>count;
    
    for(int i=1;i<=count;i++)
            {
            cin>>n;
            cout<<"Case #"<<i<<": "<<n;
            if(happy(n)==0) cout<<" is a Happy number."<<endl;
            else cout<<" is an Unhappy number."<<endl;                 
            }
return 0;
}
