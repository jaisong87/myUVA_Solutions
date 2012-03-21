#include<cstdio>
using namespace std;
#define MAX 20

bool prime[36]={1,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0};
class ring{
      int arr[MAX];
      int n,k;
      bool used[MAX];
      public:
             bool get();
             void put();
             void print();
      };
      
bool ring::get()
     {
     if(scanf("%d",&n)!=EOF)
               {
               arr[0]=1;
               for(int i=0;i<n;i++) used[i]=0;
               used[0]=1;
               k=1;
               return true;
               }
     return false;
     }

void ring::print()
     {
     for(int i=0;i<(n-1);i++) printf("%d ",arr[i]);
     printf("%d\n",arr[n-1]);             
     }
     
void ring::put()
     {
     if(n%2==1) return; 

              if(n==k) { 
                       if(prime[arr[0]+arr[n-1]]==true)   print(); 
                       return; 
                       }
                       
              for(int i=2;i<=n;i++)
                      {
                      if( (used[i-1]==false) && (prime[arr[k-1]+i]==true))
                                    {
                                    arr[k]=i;
                                    k++;
                                    used[i-1]=true;
                                    put();
                                    used[i-1]=false;
                                    k--;
                                    }
                      }              
              
     return; 
     }
     int main()
         {
         ring r1;      
         int count=0;
               while(r1.get())
                              {
                              if(count) printf("\n");
                              count++;
                              printf("Case %d:\n",count);
                              r1.put();
                              }
         }
