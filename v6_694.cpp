#include<iostream>
using namespace std;

int main()
{
    long long num,limit,cases,count;
    cases=1;
    while(cin>>num>>limit)
    {
    if(num==-1 && limit==-1) break;
    cout<<"Case "<<cases<<": A = "<<num;
    count=1;
    while( (num!=1) && (num<=limit) )
    {
    while(num%2==0) {num/=2;count++;}
    if(num%2 == 1 && num!=1) {num=(num*3)+1; if(num<=limit) count++;}
    }
    cout<<", limit = "<<limit<<", number of terms = "<<count<<endl;
    cases++;
    }

return 0;
}
    
