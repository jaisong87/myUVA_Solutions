#include<iostream>
using namespace std;

int main()
{
    long long n;
    while( ( cin>>n )&& (n>=0) ) {
                                 if(n==0) cout<<"1"<<endl;
                                 else cout<<((n+n*n)/2+1)<<endl;
                                  }        
return 0;
}
