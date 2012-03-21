#include<iostream>
using namespace std;

int main()
{
    long long result=0,n=0;
    while(cin>>n)
    {
    result=((n*n*(n+1)*(n+1))/4);
    cout<<result<<endl;
    } 
 return 0;
}
