#include <iostream> 
#include <string> 
using namespace std; 

int main() 
{ 
    
    char c; 
    string s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; 
    //qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=
    cin.unsetf(ios::skipws); 
    
    while(cin >> c) 
    { 
        if (c != ' ' && c != '\n') 
        {    
            int k = s.find(c); 
            if (k >= 0) 
               cout << s[k-2]; 
            else if((k=s.find(c+'a'-'A'))>=0)   
               cout<<s[k-2];
        } 
        else 
            cout << c; 
    } 
    return 0; 
}
