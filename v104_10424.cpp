#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
 char s1[30],s2[30];
 while(cin.getline(s1,25))
                   {   
                cin.getline(s2,25);
                 // cout<<s1<<":"<<s2<<endl;
                   
                   int l1=strlen(s1);
                   int l2=strlen(s2);
                   
                   int n1,n2;
                   n1=n2=0;
                   
                   for(int i=0;i<l1;i++)
                         {
                          if(s1[i]>='a'&&s1[i]<='z') { n1+=s1[i]-'a'+1; 
                          //cout<<s1[i]-'a'+1<< "+"; 
                          }
                          else if(s1[i]>='A'&&s1[i]<='Z') { n1+=s1[i]-'A'+1; 
                          //cout<<s1[i]-'A'+1<<"+";
                           }
                          }
                          
                   //cout<<endl;
                   for(int i=0;i<l2;i++)
                         {
                          if(s2[i]>='a'&&s2[i]<='z') { n2+=s2[i]-'a'+1;
                          //cout<<s2[i]-'a'+1<< "+"; 
                          } 
                          else if(s2[i]>='A'&&s2[i]<='Z') { n2+=s2[i]-'A'+1;
                          //cout<<s2[i]-'A'+1<< "+"; 
                          }
                            }
       float na,nb;
       na=nb=0;
       //cout<<n1<<":"<<n2<<endl;
       while(n1!=0) { na+=n1%10; n1/=10; }
       while(na>=10) { n1=int(na); na=0;        
       while(n1!=0) { na+=n1%10; n1/=10; }
       }
       
       while(n2!=0) { nb+=n2%10; n2/=10; }
       while(nb>=10) { n2=int(nb); nb=0;        
       while(n2!=0) { nb+=n2%10; n2/=10; }
       }
       
       float r;
       if(na==0&&nb==0) r=1;
       else if(na==0 || nb==0 ) r=0;
       else 
        {
       if(na<nb) r=na/nb;
       else r=nb/na;
        }
       r*=100;
       printf("%.2f %%\n",r);
       }
    return 0;
}

