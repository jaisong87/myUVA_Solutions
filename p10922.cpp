#include<iostream>
#include<string>
using namespace std;

int sod(int n)
{
int r=0;
while(n!=0)
	{
	r+=n%10;
	n/=10;
	}
return r;
}

int main()
{
string s;
int val,degree;
while(cin>>s)
	{
val=degree=0;
int z=s.size();
for(int i=0;i<z;i++)
	if(s[i]>='0' && s[i]<='9') val+=(s[i]-'0');

//cout<<"Val is:"<<val<<endl;
	if(val==0) break;
	else if((val%9)!=0) 
		{
		cout<<s<<" is not a multiple of 9."<<endl;
		}
	
	else 	{
		degree=1;
		while(val!=9) { val=sod(val); degree++; }
		cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
		}

	}
return 0;
}
