#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int S;
int N, I;
long double P, pt, pi;
cin>>S;
while(S--)
{
cin>>N>>P>>I;
pt =1;
for(int i=0;i<N;i++) pt*=(1-P);
pi = P/(1-pt);
for(int i=1;i<I;i++) pi*=(1-P);
cout<< setiosflags(ios::fixed) << setprecision(4)<<pi<<endl;
}

return 0;
}
