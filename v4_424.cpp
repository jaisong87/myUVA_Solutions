#include<iostream>
#include<string>
using namespace std;

string sum(string s1,string s2)
{
string s3="",temp,s4="";
int la,lb,i,carry=0,d1,d2;

if(s1.length() > s2.length() ) { temp=s1;s1=s2;s2=temp;}

//////adding here///////////////////
la=s1.length();
lb=s2.length();
for(i=0;i<la;i++)       
  { d1=int(s1[la-i-1]-'0');
    d2=int(s2[lb-i-1]-'0');
    s3+=char('0'+((carry+d1+d2)%10) );
    carry=(carry+d2+d1)/10;
}     
for(i=la;i<lb;i++)       
 { d2=int(s2[lb-i-1]-'0');
   s3+=char('0'+(carry+d2)%10);
    carry=(carry+d2)/10;
}       
if(carry) s3+='0'+carry;
///////reversing string////////////
la=s3.length();
for(i=0;i<la;i++)
s4+=s3[la-i-1];

return s4;

}
int main()
{
string n1,n2;
cin>>n1;
while(cin>>n2)    
 {
  if(n2.length()==1 && n2[0]=='0') break;
  n1=sum(n1,n2); 
  //cout<<"Sum is now:"<<n1<<endl; 
}
    cout<<n1<<endl;
    }
