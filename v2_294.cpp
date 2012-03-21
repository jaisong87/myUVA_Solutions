#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
#define mini(a,b) ((a<b)?(a):(b))

//long MAX=100;
bool sieve[1001];
vector<int> primes;

int div(long x)
    {
    int d=1;
    int pow=1;
    int k=0;
//    cout<<sqrt(x)<<endl;
    int root=mini(997,sqrt(x)+1);
    while( (primes[k])&& ((primes[k]<=root) && (x>1) ) )
                  {
                  while((x%primes[k])==0) { x/=primes[k]; pow++; }
    
                  d*=pow; pow=1;
                  k++;
                  }
    if((d==1)&&(x!=1)) d++;
    return d;
    }

int main()
{
    
    int i,j;
    for(i=0;i<=1001;i++) sieve[i]=1;
    i=2;
    while(i<500)
                   {
    
                if(sieve[i])                 
                           {
                           j=2;
                           while((i*j)<=1001)
                                            {
                                            sieve[i*j]=0;
                                            j++;
                                            }                         
                           }     
                    i++;                    
                   }
    for(i=2;i<=1001;i++) if(sieve[i]) primes.push_back(i);

//int z=primes.size();
//for(int i=0;i<z;i++) cout<<primes[i]<<" ";
    
    int N,max;
    long x,y,num,temp;
   cin>>N;
   for(int a=0;a<N;a++)
           { 
             cin>>x>>y;
             max=div(x); num=x;
             for(int t=x;t<=y;t++) 
                     if( (temp=div(t)) >max) 
                          {
                          num=t;
                          max=temp;
                          }
            cout<<"Between "<<x<<" and "<<y<<", "<<num<<" has a maximum of "<<max<<" divisors."<<endl;
//            if(max>1) cout<<"s";
  //          cout<<"."<<endl;
            }
return 0;    
}
