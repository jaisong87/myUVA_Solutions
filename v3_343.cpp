#include<iostream>
#include<string>
using namespace std;

long long base2dec(string n,int base)
{
int l=n.length();
int digit;
long long num=0;

for(int i=0;i<l;i++)
{     
if(n[i]>='0'&&n[i]<='9') digit=n[i]-'0';
else digit=10+n[i]-'A';

if(digit>=base) return -1;
num=num*base+digit;
     
}

return num;    
}

int main()
{
//    cout<<base2dec("111",2)<<endl;
  
  string s1,s2;
  long long n1,n2;
  int flag=0;
  while(cin>>s1>>s2)
  {
               //     cout<<s1<<":"<<s2<<endl;
     flag=0;
     for(int i=2;i<=36;i++)
     {
       n1=base2dec(s1,i);
       if(n1!=-1)
            {
                 for(int j=2;j<=36;j++)                       
                    {
                    n2=base2dec(s2,j);
                    if(n1==n2) {
                                cout<<s1<<" (base "<<i<<") = "<<s2<<" (base "<<j<<")"<<endl;
                                flag=1;
                                i=j=36;
                                }
                    else if(n2>n1) j=36;
                    }
              }     
     }
                    
     if(flag==0) cout<<s1<<" is not equal to "<<s2<<" in any base 2..36"<<endl;              
                    }  
    
    
 return 0;   
}
