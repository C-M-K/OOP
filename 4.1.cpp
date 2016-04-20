#include<iostream>
using namespace std; 
int main(){
short number; 
cout<<"Enter a number:";
cin>>number; 
cout<<"The factorial of "<<number<<"is";
int accumulator = 1;
for(;mumber>0;accumulator*=--);
cout<<accumulator<<".\n";
return 0;
}