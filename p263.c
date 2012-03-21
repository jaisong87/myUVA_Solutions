#include<stdio.h>
#include<string.h>

char* sub(char* s)
      {
      int l=strlen(s);
      char *s2=new char[l+1];    
      int i;
      
      int borrow,digit;
      borrow=digit=0;
      for(i=0;i<l;i++)
              {
              digit=s[l-i-1]-s[i]-'0';
              if(digit<0) { borrow=1; digit+=10; }
                else borrow=0;
              s2[i]=('0'+digit);  
              } 
      return strrev(s2);
      }
      
int main()
{
    
    printf("%s ",sub("12345"));
    return 0;
}
