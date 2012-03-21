#include<iostream>
#include<string>
using namespace std;

string add(string s1,string s2)
{
string s3,temp;
int carry=0,l1,l2,digit=0;
l1=s1.length();
l2=s2.length();
 
if(l1<l2) { temp=s1;s1=s2;s2=temp; l1^=l2^=l1^=l2; }       
 
 
 int i=0;
carry=digit=0;
for( i=0;i<l2;i++)
     {
    digit=((s1[l1-1-i]-'0')+(s2[l2-1-i]-'0')+carry);
    carry=digit/10;
    digit%=10;
    s3+='0'+digit; 
     }  

for( i=l2;i<l1;i++)
     {
    digit=((s1[l1-1-i]-'0')+carry);
    carry=digit/10;
    digit%=10;
    s3+='0'+digit; 
     }  
if(carry) s3+='0'+carry;       

l1=s3.length();
for(int a=0;a<l1/2;a++)
s3[l1-a-1]^=s3[a]^=s3[l1-a-1]^=s3[a];

return s3;       
}

int main()
{
string fib[5001];
int n,gen=1;
fib[0]="0"; fib[1]="1";    
 
 while(cin>>n)
 {
   while(gen<n)
         {              
         gen++;
         fib[gen]=add(fib[gen-1],fib[gen-2]);
         }   
 cout<<fib[n]<<endl;
 }  
return 0;    
}


