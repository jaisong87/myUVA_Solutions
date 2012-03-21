#include<iostream>
#include<string>
using namespace std;

long long base2dec(int base,string n)
{
long long num=0;
int l=n.length();
int digit=0;
for(int i=(n[0]=='-');i<l;i++)
   {    if(n[i]>='0'&&n[i]<='9') digit=n[i]-'0';
        else if(n[i]>='A'&&n[i]<='Z') digit=n[i]-'A'+10;
        else return -1;
        if(digit>=base) return 1759218604416LL;
        num=num*base+digit;
    }
    if(n[0]=='-') num*=-1;
return num;    
}

string dec2base(long long num,int base)
{
string n="",n1="";
if(num<0) { n1+='-';num*=-1; }
char ch;
while(num!=0)
{       
if((num%base)>9) ch=(num%base)-10+'A';
else ch='0'+(num%base);
n+=ch;
num/=base;       
}      

int l=n.length();
for(int j=0;j<l;j++)
n1+=n[l-j-1];

if(n1.length()==0) n1+="0";
return n1;       
} 


int main()
{
int base1,base2;
string num;

while(cin>>base1>>base2>>num)
{
if(base2dec(base1,num)==1759218604416LL ) cout<<num<<" is an illegal base "<<base1<<" number"<<endl; 
else cout<<num<<" base "<<base1<<" = "<<dec2base(base2dec(base1,num),base2)<<" base "<<base2<<endl; 
}
// getch();   
 return 0;   
}



