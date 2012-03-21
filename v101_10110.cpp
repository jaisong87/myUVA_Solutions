#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned long n;
    while(cin>>n)
    {
                 if(n==0) break;
                 else {
                      if(int((int(sqrt(n)))*(int(sqrt(n))))==n) cout<<"yes"<<endl;
                      else cout<<"no"<<endl;
                      }
    }
    return 0;
}
