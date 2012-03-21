#include<iostream>
#include<string>
using namespace std;


string sum(string s1,string s2)
{
int i,l,la,lb,carry=0;
la=s1.length();
lb=s2.length();
carry=0;
//s1 equal s2
string s3;
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
return s3;
}
int main()
{

string fib[5005];
fib[0]="0";
fib[1]="1";
fib[2]="1";
int big=2;
string n1="1",n2="1",n3="";
int count=2,n,l,i;
         while(count!=5000)
         {   
               count++;
               n3=sum(n2,n1);
               n1=n2;
               n2=n3;
               fib[count]=n3;
         }
         
while(cin>>n)
        { 
  //if(n<=big) 
  {            n3=fib[n]; 
               l=n3.length();
               for(i=0;i<l/2;i++)
               n3[i]^=n3[l-i-1]^=n3[i]^=n3[l-i-1];
               
             cout<<"The Fibonacci number for "<<n<<" is "<<n3<<endl;
  }
         }    
 return 0;
 }
