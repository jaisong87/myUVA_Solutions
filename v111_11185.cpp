#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
 long n;   
    
    while( (cin>>n)&&(n>=0) )
                           {
                           string s;                          
                           while(n) { s+=(n%3)+'0'; n/=3; }
                           reverse(s.begin(),s.end());
                           if(s.size()==0) s+="0";
                           cout<<s<<endl;
                           }
    
    return 0;
}
