#include<iostream>

using namespace std;

int main(){

int budget;
cin>>budget;

if(budget<1000){
    cout<<"not allowed";
}else if(budget>5000){
    cout<<"aaja";
}else{
    cout<<"gaddi le";
}

    return 0;
}