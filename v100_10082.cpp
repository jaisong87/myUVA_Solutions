#include <iostream> 
#include <string> 
using namespace std; 

int main() 
{ 
    
    char c; 
    string s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; 
    cin.unsetf(ios::skipws); 
    
    while(cin >> c) 
    { 
        if (c != ' ' && c != '\n') 
        {    
            int k = s.find(c); 
            if (k >= 0) 
               cout << s[k-1]; 
        } 
        else 
            cout << c; 
    } 
    return 0; 
}
