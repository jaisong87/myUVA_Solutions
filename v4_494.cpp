#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[300];char ch;
    int ic=0,oc=0;
    int count=0,l=0;
    int map[26]={0};
    cin.unsetf(ios::skipws);
    
    while(cin>>s)
    { ic++;
      l=strlen(s);
        
     for(int i=0;i<l;i++)              
       if(((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)))
                 { count++;l=0;oc++;}
      cin>>ch;
      if(ch=='\n') {cout<<count<<endl;count=0;}
      }   
        if(ic!=oc) cout<<count<<endl;       
    return 0;
}                    
