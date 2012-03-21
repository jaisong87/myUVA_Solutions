#include<iostream>
#include<cmath>
#define MAX 1000000
using namespace std;


int main()
{
     bool arr[MAX+1];
    
    
    long n;
    
    for(int i=2;i< 500000;i++)
    {
    if(arr[i]==0)
            {
    int j=2;
    while((i*j)<=MAX)           
                               {
                            arr[i*j]=1;                                       
                             j++;           
                             }
            }   
     }
    
    while(cin>>n)
    {
    
                 if(n==0) break;
    for(long x=3;x<=n;x+=2)
         if( arr[x]==0 && arr[n-x]==0)
          {  
           cout<<n<<" = "<<x<<" + "<<n-x<<endl; x=(n+1); 
        
            }
    
    //cout<<"done."<<endl;
    }
    //getch();
    return 0;
}


