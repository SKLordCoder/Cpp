#include <iostream>  
using namespace std;  
int main()  
{  
char ch='A';    
    int i, j, a, b;    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(a=1;a<=i;a++)    
            cout<<ch++;    
            ch--;    
        for(b=1;b<i;b++)    
            cout<<--ch;    
        cout<<"\n";       
    }     
}  