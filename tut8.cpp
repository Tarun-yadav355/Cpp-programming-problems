//Functions:-
#include<iostream>
#include<math.h>

using namespace std;

int add(int b,int c){
    int sum=0;
    sum=b+c;
    return sum;
}
    
int main(){

int a,b;
cout<<"Enter the numbers";
cin>>a>>b;

cout<<add(a,b);



    return 0;
}