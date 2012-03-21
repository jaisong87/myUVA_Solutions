#include<iostream>
#include<algorithm>
using namespace std;

void print(char s[])
	{
	int len=strlen(s);
	for(int i=0;i<len;i++) 
				{
				if(s[i]%2 == 0) cout<<char( ((s[i]-66)/2) + 'a');
				else cout<<char( ((s[i]-65)/2) + 'A');
				}
	cout<<endl;
	}

int main()
{
int n,l;
char s[201],ch;
cin>>n;
while(n>0)
	{
	n--;
	cin>>s;
	l=strlen(s);
	//cout<<s<<":"<<l<<endl;
	for(int i=0;i<l;i++) 
				{
				if(s[i]<='Z') s[i]= ( 65+2*(s[i]-'A') );
				else s[i]=( 66+2*(s[i]-'a') );
				}
	
	for(int j=0;j<l;j++)
		for(int k=j+1;k<l;k++)
			if(s[j]>s[k]) { ch=s[j]; s[j]=s[k]; s[k]=ch; }
	
	print(s);
	while( next_permutation(s,s+l)) print(s);
	}
return 0;
}


