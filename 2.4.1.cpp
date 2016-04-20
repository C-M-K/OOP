//indefinate loop, read int n input by the user,output n/5 if n is non negative and divisible by 5 and -1 otherwise...use ?: to do this 

#include <iostream>
using namespace std; 
int main(){
int n;  
do {
cout<<"Enter a number";
cin>>n;
cout<<"((0==n%5)&&(n>=0))? n/5:-1"; //where ternary operator goes ... ? sort of if and : sort of else 
count--; 
}while(1);
return 0;
} 
