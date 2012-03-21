#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int n;    
     
 while(cin>>n)
 {
 long max=1;
 for(int a=1;a<=n;a++) max*=10;
 long n1=1;
 for(int b=1;b<=(n/2);b++) n1*=10;
 for(long num=0;num<max;num++)              
          {                                 
         long na=num/n1;
         long nb=num%n1;
         long nc=( (na+nb)*(na+nb) );
         if(nc==num)
                  {
                if(num==0) for(int i=1;i<n;i++) cout<<"0";
                else for(int j=0;j<( n-1-int(log10(num)) );j++) cout<<"0"; cout<<num<<endl;
                  }
          }               
 }   
    
return 0;    
}
