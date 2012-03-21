#include<iostream>
#include<string>
using namespace std;

string sum(string s1,string s2)
{
string temp;
int i,l,la,lb,carry=0;
if( s1.length()<s2.length() ){temp=s1;s1=s2;s2=temp;}
//making s1 bigger than s2 that loop is 1-la  la-lb
la=s1.length();
lb=s2.length();
carry=0;
//s1 equal s2
string s3;
for(i=0;i<lb;i++)
{
s3+=(carry+s1.at(la-i-1)-'0'+s2.at(lb-i-1)-'0')%10+'0';
carry=(carry+s1.at(la-i-1)-'0'+s2.at(lb-i-1)-'0')/10;
}
for(i=lb;i<la;i++)
{
s3+=(carry+s1.at(la-i-1)-'0')%10+'0';
carry=(carry+s1.at(la-i-1)-'0')/10;
}
if(carry>0)
s3+=(carry+'0');
/////reversing s3
l=s3.length();
for(int e=0;e<l/2;e++)
s3[e]^=s3[l-e-1]^=s3[e]^=s3[l-e-1];
return s3;
}

string product(string s1,string s2)
{
int la,lb,l,carry,d1,d2;
string temp,p;
la=s1.length();
lb=s2.length();
if(la<lb){temp=s1;s1=s2;s2=temp; la^=lb^=la^=lb;}
//s2 is smaller to make it optimised 
//else {product(1,99999) won't be comparable wit product(99999,1) 
p="0";
carry=0;
for(int i=0;i<lb;i++)       
{       

temp="";
d2=s2.at(lb-i-1)-'0';
carry=0;

for(int z=0;z<i;z++)
temp+="0";

 for(int j=0;j<la;j++)
   {
   d1=s1.at(la-j-1)-'0';
   temp+=(carry+d1*d2)%10+'0';
   //cout<<"Ins:"<<(char)( (carry+d1*d2)%10+'0' )<<endl;
   carry=(carry+d1*d2)/10;
    } 

if(carry) temp+=carry+'0'; 
l=temp.length();

for(int a=0;a<(l/2);a++)
temp[a]^=temp[l-a-1]^=temp[a]^=temp[l-a-1];

p=sum(p,temp);
}
return p;      
}

int main()
{  string n,ans,n1;
while(cin>>n)
             {
             n1=n;
             for(int i=n1.size()-1;i>=0;i--)
                     {
                     if(n1[i]!='0') { n1[i]--; break; }
                     else n1[i]='9';    
                     }
                     
             ans="2";
             ans=sum(ans,product(n,n1));                              
             cout<<ans<<endl;
             }
    
    return 0;
}



