#include<iostream>
#include<string>
using namespace std;

string rsum(string s1,string s2)
{
int i,l,la,lb,carry=0;
la=s1.length();
lb=s2.length();
carry=0;
//s1 equal s2
string s3,s4;
for(i=0;i<lb;i++)
{
s3+=(carry+s1.at(i)-'0'+s2.at(i)-'0')%10+'0';
carry=(carry+s1.at(i)-'0'+s2.at(i)-'0')/10;
}
for(i=lb;i<la;i++)
{
s3+=(carry+s1.at(i)-'0')%10+'0';
carry=(carry+s1.at(i)-'0')/10;
}
if(carry>0)
s3+=(carry+'0');

int zflag=0;
l=s3.length();
s4="";

for(i=0;i<l;i++)
{
if(zflag==0 && s3.at(i)!='0') zflag=1;
if(zflag==1) s4+=s3.at(i);
}

return s4;
}

int main()
{
string s1,s2,s3,temp;
unsigned int n;cin>>n;
for(;n>0;n--)
{
cin>>s1>>s2;
if(s1.length()<s2.length()) {temp=s1;s1=s2;s2=temp;}
s3=rsum(s1,s2);
cout<<s3<<endl;
}
 return 0;
 }
