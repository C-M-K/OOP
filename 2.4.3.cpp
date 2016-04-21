// with break 
#include<iostream>
using namespace std; 
int main(){
int n;
do{
cout<<"Enter a number";
cin>>n; 
if((n>0)&&(n%5)){
cout<<n/5; 
}else if(n<0){
cout<<"Error";
break; 
}else{
cout<<"-1";
}
}while(1);
return 0;
}

//code will compile but output is iffy 
