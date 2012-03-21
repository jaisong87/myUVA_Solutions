#include<iostream>
#include<string>
using namespace std;
#define MAX 26
#define mini(a,b) ((a<b)?(a):(b))
int main()
{
int arr1[MAX],arr2[MAX];
for(int h=0;h<MAX;h++) arr1[h]=arr2[h]=0;

string s1,s2,s3;
while(getline(cin,s1))
	{
	getline(cin,s2);
	for(int h=0;h<MAX;h++) arr1[h]=arr2[h]=0;
	
	int z1=s1.size();
	int z2=s2.size();	
	
	for(int a=0;a<z1;a++) if(isalpha(s1[a])) arr1[s1[a]-'a']++;
	for(int b=0;b<z2;b++) if(isalpha(s2[b])) arr2[s2[b]-'a']++;
	
	s3="";
	for(int i=0;i<MAX;i++)
		{
		int j=mini(arr1[i],arr2[i]);		
		for(;j>0;j--) s3+=char('a'+i);
		}
	cout<<s3<<endl;
	}
return 0;
}

