#include<iostream>
using namespace std;

int main()
{
int n,sum,avg,mov,i,count=0;
int * box;

while(cin>>n)
{
             if(n==0) break;
count++;
//if(count>1) cout<<endl;
box=new int[n];
sum=avg=mov=i=0;

for(i=0;i<n;i++)
{cin>>box[i];sum+=box[i];}

avg=sum/n;

for(i=0;i<n;i++)
if(box[i]>avg) mov+=box[i]-avg;
else mov+=avg-box[i];

mov/=2;
cout<<"Set #"<<count<<endl;
cout<<"The minimum number of moves is "<<mov<<"."<<endl<<endl;
}
return 0;
}
