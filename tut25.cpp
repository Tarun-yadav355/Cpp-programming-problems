#include<iostream>

using namespace std;

int getbit(int a, int index){
    return ((a & (1<<index))!=0);
}

int main(){

cout<<getbit(5,2)<<endl;



    return 0;
}