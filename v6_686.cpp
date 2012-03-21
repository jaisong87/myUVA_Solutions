#include<iostream>
#include<cmath>
#define MAX 100000
using namespace std;


int main()
{
     bool arr[MAX+1];
    
    
    long n;
    
    for(long i=2;i<= (MAX/2); i++)
    {
    if(arr[i]==0)
            {
    long j=2;
    while((i*j)<=MAX)           
                               {
                            arr[i*j]=1;                                       
                             j++;           
                             }
            }   
     }
    
    while(cin>>n)
    {
    int count=0;
   
    if(n==0) break;
    if(n==4||n==5) count=1;
    for(long x=3;x<=(n/2);x+=2)
         if( arr[x]==0 && arr[n-x]==0)
          {  
           count++; 
          // cout<<n<<" = "<<x<<" + "<<n-x<<endl;
            }
    
    cout<<count<<endl;
    }
    //getch();
    return 0;
}


