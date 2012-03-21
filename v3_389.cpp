#include<iostream>
#include<string>
using namespace std;

long long base2dec(int base,string n)
{
     int num=0;
     int digit;
     int l=n.length();
     
     for(int i=((n[0]=='+')||(n[0]=='-'));i<l;i++)
     {
             if(n[i]>='0'&&n[i]<='9') digit=n[i]-'0';
             else digit=n[i]+10-'A';
             if(digit>=base) return (200000000000000LL);
             num=num*base+digit;
     }
     if(n[0]=='-') num*=-1;
     return num;
}

string dec2base(int base ,long long num)
{
       string n="",n1="";;
       if(num<0) { n1+='-'; num*=-1; }
       char ch;
       while(num!=0)
       {
                    if((num%base)>=10) ch=(num%base)+'A'-10;
                    else ch=(num%base)+'0';
                    n+=ch;
                    num/=base;
                    }
       
int l=n.length();
for(int i=0;i<l;i++)
n1+=n[l-i-1];


if(n1.length()==0) n1+="0";       
       return n1;
       
}      

int main()
{
 int base1,base2;
 string num,num2;
 
 int l=0;
//    cout<<base2dec(2,"11")<<endl;
   while(cin>>num>>base1>>base2)
 {   
num2=dec2base(base2,base2dec(base1,num));
l=num2.length();
if(l>7) cout<<"  ERROR"<<endl;
else {
     for(int i=0;i<(7-l);i++)
     cout<<" ";
     cout<<num2<<endl;
     }    
}
  
    return 0;
}
       
       
       
             
