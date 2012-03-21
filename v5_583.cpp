#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long n,i;
    int r,count=0;
    while(cin>>n)
    {             
                 if(n==0) break;
                cout<<n<<" =";
                 count=0;
                 if(n<0) {n*=-1;count++;cout<<" -1";}
               
                   r=long(sqrt(n))+1;
                 i=2;
                 while(n%i == 0)
                    {         if(count>0) cout<<" x";
                              cout<<" "<<i; count++;
                              n/=i;
                    }
                i=3;
                 while(n!=1)
                 {
                  
                  if(i>=r) {   if(count>0) cout<<" x";
                              cout<<" "<<n; break; }
                 
                    while(n%i == 0)
                    {         if(count>0) cout<<" x";
                              cout<<" "<<i; count++;
                              n/=i;
                    }
                 i+=2;
                            
                 }
     cout<<endl;
     }
return 0;
}                                 
