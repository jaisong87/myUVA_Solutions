#include<iostream>
#include<vector>
using namespace std;

#define MAX 1000001
int main()
{
    bool sieve[MAX];
    for(long i=2;i<MAX;i++) sieve[i]=true; 
    long i,j;
    i=2;
    while(i<(MAX/2))
                    {
                    if(sieve[i]==true)
                                      {
                                      j=2;
                                      while((i*j)<MAX)       
                                                     {
                                                     sieve[i*j]=false;
                                                     j++;
                                                     }
                                      }
                    i++;
                    }
    vector<long> primes;
    for(long a=2;a<MAX;a++) if(sieve[a]==true) primes.push_back(a);
    
    long n;
    int z=primes.size(),fcount;
    //cout<<"Done with sieve"<<endl;
    //for(int a=0;a<10;a++) cout<<primes[a]<<" "; cout<<endl;
    
    while( (cin>>n)&&(n) )
                 {
                 fcount=0;
                 for(int b=0;(primes[b]<=(n/2))&&(b<z);b++)
                         if((n%primes[b])==0) fcount++;
                 if(!fcount) fcount++;
                 cout<<n<<" : "<<fcount<<endl;      
                 }
    return 0;
}
