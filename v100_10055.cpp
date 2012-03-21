#include<iostream>
using namespace std;

int main()
{
 long long hsol,osol,d;  
    while(cin>>hsol>>osol)
    {
    if(hsol<osol) d=osol-hsol;
    else d=hsol-osol;
    cout<<d<<endl;
                            }
    return 0;
}
