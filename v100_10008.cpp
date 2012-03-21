#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[300];
    int n,count=0,max=0;
    int map[26]={0};
    cin>>n;//cin>>ch;
    do
    {              cin.getline(s,300);
          for(int i=0;i<strlen(s);i++)
          if(s[i]>=65&&s[i]<=90) map[s[i]-65]++;
               else if(s[i]>=97&&s[i]<=122) map[s[i]-97]++;
       //        cout<<s<<":"<<count<<endl;
            count++;
           } while(count!=(n+1));
   
    
     max=0;              
    for(int i=0;i<26;i++)
    if(map[i]>max) max=map[i];
       
       for(int a=max;a>0;a--)
       for(int b=0;b<26;b++)
       if(map[b]==a) cout<<(char)(65+b)<<" "<<map[b]<<endl;          
    
    return 0;
}                    
