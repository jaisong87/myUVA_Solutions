#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n1,n2,z;
 while(cin>>s)
              {
              z=s.size();
              if(s.size()==1 && s[0]=='0') break;
              cout<<s;
              n1=n2=0;
              for(int i=0;i<z;i++)
                      {
                      if(i%2) n1+=s[i]-'0';
                      else n2+=s[i]-'0';
                      }
              if( (n1-n2)%11 == 0 ) cout<<" is a multiple of 11."<<endl;
              else cout<<" is not a multiple of 11."<<endl;
              }
    return 0;
}
