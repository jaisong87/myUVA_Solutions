#include<iostream>
using namespace std;

int main()
{
    
    long long cut,piece;
    
    while( (cin>>cut)&&(cut>=0) )
           {
           piece=cut*(cut+1);
           piece/=2;
           piece++;       
           cout<<piece<<endl;             
           }
    return 0;
}
