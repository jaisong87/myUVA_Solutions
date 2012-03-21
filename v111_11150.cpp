#include<iostream>
using namespace std;

int cola(int full,int bor)
{
int tot=0;    
    int empty=bor;
while(full)
           {    
           tot+=full;
           empty+=full;
           full=empty/3;
           empty%=3;          
           }
   if(empty>=bor) return tot; 
    else return 0;
}

int main()
{
    int n,max;
    while(cin>>n)
                 {
                 max=cola(n,0);
                 if(cola(n,1)>max) max=cola(n,1);
                 if(cola(n,2)>max) max=cola(n,2);        
                 cout<<max<<endl;
                 }
    return 0;
}
