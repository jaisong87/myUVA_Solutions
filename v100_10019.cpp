#include<iostream>
using namespace std;

int bc(int x)
           {
                //cout<<"Calculating bit:"<<x<<endl;
                int tot=0;
                for(;x;x>>=1)
                             {
                  //          cout<<x<<":"<<tot<<endl;
                            if(x&1) tot++;
                            }
           return tot;     
           }
int main()
{
    int count,dec,hex,b1,b2;
    
    cin>>count;
    
    while(count)
                {
                count--;
                cin>>dec;
                hex=0;
                
                for(int i=1000;i;i/=10)
                                { hex+=(dec/i)%10; hex*=16;  }    
                b1=bc(dec);
                b2=bc(hex);
                cout<<b1<<" "<<b2<<endl;
                }
    return 0;
}
