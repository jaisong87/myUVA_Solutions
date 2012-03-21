#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
#define mini(a,b) ((a<b)?(a):(b))
#define MAX 46342

bool sieve[MAX+1];
vector<int> primes;

void dis(long a,long b)
     {
     //  cout<<a<<"   "<<b<<endl;
     int len=b-a+1;
     bool * d=new bool[len];
      
      int x=0;
      if(a%2==0)  d[x]=0; 
      else d[x]=1;
      x++;
      while(x<len) 
                          { d[x]=(1-d[x-1]);  
                         // cout<<x<<":"<<d[x]<<endl;
                          x++;
                          } 
           

  
      if(a==1) { d[0]=0; d[1]=1; }                   
      if(a==2)   d[0]=1;      
  
  
      int z=primes.size();
      long root=mini(46337,(long)sqrt(b));
   int k=1;
   unsigned long j=0;

   //cout<<root<<endl;   
   while(k<z && primes[k]<=root)    
              {
              j=a+primes[k]-a%primes[k];              
              if(j==primes[k]) j+=primes[k];
              //cout<<primes[k];
              while(j<=b) { d[j-a]=0; j+=primes[k]; }               
              k++;
              }

    // cout<<"Dis is called"<<endl;

     // for(int x=0;x<len;x++) cout<<a+x<<":"<<d[x]<<endl; 
      
     long s1,s2,ds,l1,l2,dl,prev;
     s1=s2=-1;
     l1=l2=-1;
     int i=0;
      while( (s2==-1)&&(i<len) ) 
             {
             if(d[i])
                        {
                        if(s1==-1) s1=l1=i;
                        else s2=l2=i;       
                        }
             i++;
             }
     ds=s2-s1;
     dl=l2-l1;
     prev=s2;
    // cout<<"Initially :"<<s1<< " "<<s2<<"  "<<l1<<"  "<<l2<<"  "<<i<<endl;
     if(s2>=0)
             {
             while(i<len)
                         {
                         if(d[i])
                                 {
                                 if((i-prev)>dl)       
                                               {
                                               dl=i-prev;
                                               l1=prev;
                                               l2=i;        
                                               }    
                                 if((i-prev)<ds)       
                                               {
                                               ds=i-prev;
                                               s1=prev;
                                               s2=i;        
                                               }    
                                             
                                 prev=i;           
                                 }
                         i++;
     //cout<<"Now :"<<s1<< " "<<s2<<"  "<<l1<<"  "<<l2<<"  "<<i<<endl;
                         }
            cout<<a+s1<<","<<a+s2<<" are closest, "<<a+l1<<","<<a+l2<<" are most distant."<<endl;
             }
     else cout<<"There are no adjacent primes."<<endl;
   delete d;
     return;         
     }

int main()
{
    
    int i,j;
    for(i=0;i<=MAX;i++) sieve[i]=1;
    i=2;
    while(i<(MAX/2))
                   {
    
                if(sieve[i])                 
                           {
                           j=2;
                           while((i*j)<=MAX)
                                            {
                                            sieve[i*j]=0;
                                            j++;
                                            }                         
                           }     
                    i++;                    
                   }
    for(i=2;i<=MAX;i++) if(sieve[i]) primes.push_back(i);

long x,y;
  while(cin>>x>>y) dis(x,y);

return 0;    
}
