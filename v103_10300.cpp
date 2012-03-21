#include<iostream>
using namespace std;

int main()
{   int m,count=0;;
    cin>>m;
    while(count!=m)
                {
    int n,fa,na,ef;
    long long budget=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>fa>>na>>ef;
            budget+=(fa*ef);
    }
    cout<<budget<<endl;
                   count++;
                       }
return 0;
}
