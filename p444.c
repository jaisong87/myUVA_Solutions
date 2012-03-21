#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 350

int main()
{
char input[MAX],output[MAX];
int len1,len2,i,j;

while(gets(input)!=NULL)
	{
len1=strlen(input);
//for(i=0;i<len1;i++) printf("%c",input[i]); printf("\n");

if(!isdigit(input[0]))
	{
	len2=0;
		for(i=0;i<len1;i++)
			{
			if(input[i]>=100)
				{
				len2+=3;
				output[len2-1]='0'+input[i]%10;
				output[len2-2]='0'+(input[i]/10)%10;
				output[len2-3]='0'+input[i]/100;
				}
			else {
			     len2+=2;
			     output[len2-1]='0'+input[i]%10;					
			     output[len2-2]='0'+input[i]/10;	
			     }
			}
	for(i=len2-1;i>=0;i--) printf("%c",output[i]);
	}
else {
     len2=0;
     len1--;
     while(len1>0)
		{
                if(input[len1]>'1')
				{
				len1-=2;			
				output[len2]=(input[len1+2]-'0')*10+(input[len1+1]-'0');
				len2++;
				}
		else 
			{
			len1-=3;
			output[len2]=(input[len1+3]-'0')*100+(input[len1+2]-'0')*10+(input[len1+1]-'0');
			len2++;
			}
		}
        for(i=0;i<len2;i++) printf("%c",output[i]);
	}
	printf("\n");
		
	}
return 0;
}

