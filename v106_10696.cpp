//f91(n)
#include<iostream>
using namespace std;

int main()
{
    
    long n;
    while(cin>>n)
    {
                 if(n==0) break;
                 else
                 {
                     if(n<=100)
                     cout<<"f91("<<n<<") = 91"<<endl;
                     else
                     cout<<"f91("<<n<<") = "<<n-10<<endl;
                     }
    }
    return 0;
}
