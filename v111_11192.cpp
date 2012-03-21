#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
 int g,z,b;   
 string s;   
    while((cin>>g)&&(g))
                        {
                        cin>>s;
                        z=s.size();
                        b=z/g;
                           for(int i=0;i<g;i++)
                                   {
                                reverse(s.begin()+i*b,s.begin()+(i+1)*b);      
                                   }
                               // reverse(s.begin()+b*(g-1),s.end());                   
                        cout<<s<<endl;
                        }
    return 0;
}
