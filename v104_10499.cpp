#include<iostream>
using namespace std;

int main()
{
 long long n,p;
 while( (cin>>n)&&(n>0) )
        {
        if(n==1) p=0;
        else p=25*n;
        cout<<p<<"%"<<endl;                
        }
    return 0;
}
