//Inclusion and exclusion = x1+x2-x3
#include<iostream>

using namespace std;

int divisible(int n, int a , int b){

    int x1 = n/a;
    int x2 = n/b;
    int x3 = n/(a*b);

    return x1+x2-x3;
}

int main(){

    int n, a, b;

    cin>>n>>a>>b;

cout<<divisible(n,a,b)<<endl;

    return 0;
}