//Calculator :-
#include<iostream>

using namespace std;

int main(){

int a,b;

cout<<"Enter two numbers\n";
cin>>a>>b;

char op;

cout<<"Enter operator";
cin>>op;

switch (op)
{
case '+':
cout<< a+b <<endl;
    break;

case '-':
cout<< a-b <<endl;
break;

case '*':
cout<< a*b <<endl;
break;

case '/':
cout<< a/b <<endl;

default:
cout<<"Enter another operator";
    break;
}

    return 0;
}