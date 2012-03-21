#include<iostream>
using namespace std;

int main()
{    int n;
    unsigned long long s,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>s>>d;
    if( (s<d)||( ((s+d)%2)!=0) )    cout<<"impossible"<<endl;
    else cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
    }
return 0;
}
