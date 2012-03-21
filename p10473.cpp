#include<iostream>
#include<string>
using namespace std;


int main()
{
string str,s2,s3;
int l,org,l3;
long long val;

while(cin>>str)
	{
org=0;
val=0;
s2="";
s3="";
l=str.length();
if(l==2 && str[0]=='-' && str[1]=='1') break;
if(l>0 && str[0]=='-' && (!(str[1]=='0' && str[2]=='x')) ) break;
if(l>0 && str[0]=='-' ) { s2+='-'; org=1; }
//cout<<str<<":"<<l<<endl;
if( (l>(org+1) ) && str[org]=='0' && str[org+1]=='x' )
	{
	//cout<<"I am hex"<<endl;
	int i=org+2;
        while(i<l ) { val*=16; 
	if(str[i]>='0' &&str[i]<='9') val+=str[i]-'0'; 
	else val+=10+str[i]-'A';
	i++; 
			   }
        //cout<<"Value is:"<<val<<endl;
	if(val==0) s2+="0";
	else 
	{
	while(val>0) { s3 +=( (val%10)+'0');  val=(val/10); }	
	l3=s3.length();
	for(int i=0;i<l3;i++) s2+=s3[l3-i-1];
		     }
	}
else {
	//cout<<"I am decimal"<<endl;
	s2+="0x";
     int i=org;
     while(i<l) { val*=10; val+=str[i]-'0'; i++; } 	
     //cout<<"Value found:"<<val<<endl;
	if(val==0) s2+="0";
	else 
	{
	while(val>0) { if((val%16)<=9) s3+=( '0'+(val%16) ); 
	            else s3+=('A'-10+ (val%16) );
		    val=val>>(4);
			  }	
        }
	//cout<<"s3 is:"<<s3<<endl;
	l3=s3.length();
	for(int i=0;i<l3;i++) s2+=s3[l3-i-1];
	}
cout<<s2<<endl;
	}
return 0;
}

