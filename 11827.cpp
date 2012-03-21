#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

long long gcd(long long a, long long b)
{
if(a<b) a^=b^=a^=b;
if(b==0) return a;
return gcd(b, a%b);
}

int main()
{
int Nc = 0;
cin>>Nc;
for(int i=1;i<=Nc;i++)
        {
          string s; getline(cin,s);
          stringstream ss1(s);
           long long n; vector<long long> v;
           while(ss1>>n) v.push_back(n);
        
           long long bgcd = gcd(v[0], v[1]);
           int z = v.size();
       
           for(int j=0;j<z;j++)
                 for(int k=0;k<z;k++)
                if( j != k )      
                      {
                            if(gcd(v[j],v[k]) > bgcd) bgcd = gcd(v[j], v[k]);
                      }      
         cout<<bgcd<<endl;
     }
return 0;
}
