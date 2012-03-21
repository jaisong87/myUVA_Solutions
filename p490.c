#include<stdio.h>
#include<string.h>
#define MAX 102

int main()
{
char str[MAX][MAX];
int i,j,k,max,tot;

tot=max=0;
while( gets(str[tot])!=NULL )
	{
	if(strlen(str[tot])>max)  max=strlen(str[tot]);
	tot++;
	}
tot--;
while(strlen(str[tot])==0) tot--;

//for(i=0;i<tot;i++) printf("%s\n",str[i]);

for(i=0;i<max;i++)
   {
  for(j=tot;j>=0;j--)
	{
	if(i < strlen(str[j]) )  printf("%c",str[j][i]);
	else printf(" ");
	/*	{
	      k=i;
	      while( (strlen(str[k])<i)&&(k>0) ) k--;  
              if(k>0) printf(" ");
	      else if( (k==0) &&(strlen(str[0])>=i) ) printf(" "); 
	     }
	*/
	}
printf("\n");
   }
return 0;
}

