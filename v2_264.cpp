#include<iostream>
using namespace std;


int main()
{
long long n;    
    
    while(cin>>n)
    {
    long long i=0,dx;
    while( (i*(i+1)/2) < n) i++;
    dx=( (i*(i+1))/2 )-n;
    cout<<"TERM "<<n<<" IS ";//2/1
    if(i%2==0) cout<<i-dx<<"/"<<dx+1<<endl;
    else cout<<dx+1<<"/"<<i-dx<<endl;    
    //cout<<n<<":"<<i<<":"<<dx<<endl;
    }
    
 return 0;   
}
