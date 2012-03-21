#include<stdio.h>
#include<string.h>

int main()
{
int rows[26],cols[26],n;    
int rrow,rcol;
int mul=0;
char ch;
int i,j,k;
char s1[60],s2[60];
    
scanf("%d\n",&n); 
  for(i=0;i<n;i++) 
             {  
             scanf("%c",&ch);
             scanf("%d %d\n",&rows[ch-'A'],&cols[ch-'A']);
             }
             
  for(i=0;i<n;i++) printf("%c %d %d\n",i+'A',rows[i],cols[i]);   
    
while(scanf("\n%s",&s1)!=EOF) 
                              {
                            rrow=rcol=0;
                            muls=0;
                            
                            
                             while(strlen(s1)!=1)
                             { 
                              printf("%s\n",s1);
                              
                              for(j=0;s[j]!=')';j++);
                              while(s[j]!='(') j--; 
                              j++;
  
                              
                              
                              }
                              
                              }    
    
 return 0;   
}

