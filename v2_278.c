#include<stdio.h>
#define mini(a,b) ((a<b)?(a):(b))

int main()
{
    char ch;
    int n,row,col;
    scanf("%d\n",&n);
    
    while(n>0)
              {
             // printf("N is:%d\n",n);
              scanf("%c %d %d\n",&ch,&row,&col);
              switch(ch)
                        {
                        case 'r':
                        case 'Q':printf("%d\n",mini(row,col));break;
                        case 'k':printf("%d\n", ((row*col)+1)/2 );break;
                        case 'K':printf("%d\n", ((row+1)/2)*((col+1)/2) );break;                         
                        }     
              n--;
              }
return 0;    
}
