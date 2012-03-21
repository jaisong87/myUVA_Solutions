#include<iostream>
#define MAX 1000000
using namespace std;

long long len[MAX];

int find_l(long long a)
{
if(a<MAX && len[a]!=-1) return len[a];
long long count=0;
while(a!=1)
	{
	if(a%2 == 0) a/=2; 
	else a=3*a+1;
	count++;
	}
return count;
}
/*
int find_len(unsigned int a)
{
int value;
if(a<MAX && len[a]!=-1) return len[a];
else {
     if(a%2 == 0) value=find_len(a/2); 
     else value=find_len(3*a+1);
	len[a]=1+value;
		  }
return len[a];
}
*/
int main()
{
long long i,j,a,b,c,max;
for( int i=0;i<MAX;i++) len[i]=-1;
len[0]=0;
len[1]=3;
while(cin>>i>>j)
		{
	if(i>j) i^=j^=i^=j;
	a=i; b=j;
	//if(j<i) { b=i; a=j; }
	//else { a=i; b=j; }
	if(a==0 && b==0 ) break;
	max=find_l(a); c=a;
	a++;
	while(a<=b) { if(find_l(a)>max) { max=find_l(a); c=a; } a++; } 
	cout<<"Between "<<i<<" and "<<j<<", "<<c<<" generates the longest sequence of "<<max<<" values."<<endl;
		}

return 0;
}

