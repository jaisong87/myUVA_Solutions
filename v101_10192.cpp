#include<stdio.h>
#include<string.h>
#define MAX 1005
#define max(i,j) ((i>j)?i:j)

int main()
{
int LCS[MAX][MAX];    
char s1[MAX]="",s2[MAX]="";    
int l1,l2,i,j,count=1;    
    
    while(1)
           {
           if(gets(s1)==NULL) break;
           if(gets(s2)==NULL) break; 
           /*
          l1=l2=0; 
          ch=getchar();
          while(!((ch=='\n')||(ch==EOF))) { s1[l1++]=ch; ch=getchar();  }
          printf("%s\n",s1);
          
          ch=getchar();
          while( !( (ch=='\n')||(ch==EOF) ) ) { s2[l2++]=ch; ch=getchar(); }
          l1++; l2++;
          printf("%s\n",s2);
          */
          l1=strlen(s1);   l2=strlen(s2);
          //printf("%s\n%s\n",s1,s2);
          
          for(i=0;i<=l1;i++) LCS[i][l2]=0;
          for(j=0;j<=l2;j++) LCS[l1][j]=0;
          
          for(i=1;i<=l1;i++)
             for(j=1;j<=l2;j++)
                   {
                   if(s1[i-1]==s2[j-1]) LCS[i][j]=1+LCS[i-1][j-1];
                   else LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);
                   }
           printf("Case #%d: you can visit at most %d cities.\n",count,LCS[l1][l2]);
          count++; 
	  }
return 0;
}
