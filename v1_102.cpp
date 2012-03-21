#include<stdio.h>
int main()
{
    int b[3],g[3],c[3],min;
    char * str="BCG";
while(scanf("%d %d %d %d %d %d %d %d %d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
{
min=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
str="BCG";
//BGC 
if((b[1]+b[2]+g[0]+g[2]+c[0]+c[1])<min) {str="BGC"; min=b[1]+b[2]+g[0]+g[2]+c[0]+c[1]; }
//CBG 
if((b[0]+b[2]+g[0]+g[1]+c[1]+c[2])<min) {str="CBG"; min=b[0]+b[2]+g[0]+g[1]+c[1]+c[2]; }
//CGB 
if((b[0]+b[1]+g[0]+g[2]+c[1]+c[2])<min) {str="CGB"; min=b[0]+b[1]+g[0]+g[2]+c[1]+c[2]; }
//GBC 
if((b[0]+b[2]+g[1]+g[2]+c[0]+c[1])<min) {str="GBC"; min=b[0]+b[2]+g[1]+g[2]+c[0]+c[1]; }
//GCB
if((b[0]+b[1]+g[1]+g[2]+c[0]+c[2])<min) {str="GCB"; min=b[0]+b[1]+g[1]+g[2]+c[0]+c[2]; }
printf("%s %d\n",str,min);
}
return 0;
}
