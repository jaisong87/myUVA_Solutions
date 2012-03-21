//MineSweeper
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
 int count=1;   
    int i,j;
    char x[102][102];int y[102][102];
    int a,b;
    while(cin>>i>>j)
    {
    if((i==0)&&(j==0)) break;
    //scanning
    for(a=1;a<=i;a++)
    for(b=1;b<=j;b++)
    cin>>x[a][b];
    //process
    for(a=1;a<=i;a++)
    for(b=1;b<=j;b++)
               {         
     if(x[a][b]=='*') y[a][b]=9;
     else      {
               y[a][b]=0;          
               y[a][b]=((x[a-1][b-1]=='*')*(a!=1)*(b!=1))+   
                        ((x[a-1][b]=='*')*(a!=1))+
                        ((x[a][b-1]=='*')*(b!=1))+
                        ((x[a+1][b]=='*')*(a!=i))+
                        ((x[a][b+1]=='*')*(b!=j))+
                        ((x[a+1][b+1]=='*')*(a!=i)*(b!=j))+
                        ((x[a-1][b+1]=='*')*(a!=1)*(b!=j))+
                        ((x[a+1][b-1]=='*')*(a!=i)*(b!=1));
               }
               }
    //print the output
    if(count!=1) cout<<"\n";
    cout<<"Field #"<<count<<":\n";
    for(a=1;a<=i;a++)
       {             for(b=1;b<=j;b++)
                     {
                         if(y[a][b]==9) cout<<"*";
                         else cout<<y[a][b];
                         }
        cout<<endl;
        }
           
    count++;//end of this minemap
    }//end of while
    
    return 0;
}
