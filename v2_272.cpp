//teX quotes
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char ch;
    int quote=1;
    int n=1;
    while((ch=getc(stdin))!=EOF)
    {     
                    if(ch=='"') 
                    {if((quote%2)==1) cout<<"``";
                    else cout<<"''";
                    quote++;           
                    }
                    else cout<<ch;
    }
    //cout<<n<<endl;
    return 0;
}
                      
                    
                    
