#include<iostream>
#include<string>

using namespace std;

int main()
{
   long long comb;
  string word;
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++)
       {  
     cin>>word;
     comb=1;
     int l=word.length();
     for(int a=1;a<=l;a++) comb*=a;
    
    int count=1;
          for(int x=0;x<(l-1);x++)
          {
    count=1;
    if(word[x]!=' ')
                     {
                  for(int y=(x+1);y<l;y++)
                  if(word[x]==word[y]) {word[y]=' '; count++; }            
                     }
         word[x]==' ';
     for(int z=1;z<=count;z++) comb/=z;    
          }
    cout<<"Data set "<<i+1<<": "<<comb<<endl;      
       }  
 return 0;   
}
