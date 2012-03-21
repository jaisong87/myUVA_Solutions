#include<iostream>
#include<string>
using namespace std;

int main()
{
string s2;
char s1[200];
while(cin.getline(s1,200))
	{
	//cout<<s1<<endl;
	int z=strlen(s1);
	if(z==4 && s1[0]=='D' && s1[1]=='O' && s1[2]=='N' && s1[3]=='E') break;
	s2="";
	for(int i=0;i<z;i++) if(s1[i]>='a'&&s1[i]<='z') s2+=(s1[i]-'a'+'A');
			      else if(s1[i]>='A' && s1[i]<='Z') s2+=s1[i];
	
	//cout<<s2<<endl;	
	int flag=0;
	int z2=s2.size();
	for(int i=0;i<(z2/2);i++)
		if(s2[i]!=s2[z2-i-1]) { flag=1; i=z2; }		
	if(flag==0) cout<<"You won't be eaten!"<<endl;
	else cout<<"Uh oh.."<<endl;
	}
return 0;
}

