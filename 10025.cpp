#include<iostream>
#include<cmath>
using namespace std;

int main()
{
long long T,N;
cin>>T;
for(int i=0;i<T;i++)
	{
	cin>>N;
	if(N<0) N*=-1;
	int  k = sqrt(2*N);
	//( (k*(k+1)/2) < N ) k--;
	while( (k*(k+1)/2) < N) k++;
	while( ( (k*(k+1)/2) - N ) % 2) k++; 
	cout<<k<<endl; 
	if(i<(T-1)) cout<<endl; 
	}
return 0;
}
