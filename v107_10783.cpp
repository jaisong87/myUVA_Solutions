#include<iostream>
using namespace std;

int main()
{   int t;
    int a,b,n1,n2;
    cin>>t;
    for(int x=0;x<t;x++)
    {
    long long sum=0;
    cin>>a>>b;
    
                    n1=b-(b+1)%2;
                    n2=(a)+(a+1)%2;
    sum=(((n1-n2)/2)+1)*((n1+n2)/2);
    cout<<"Case "<<x+1<<": "<<sum<<endl;
    }
return 0;
}
 
