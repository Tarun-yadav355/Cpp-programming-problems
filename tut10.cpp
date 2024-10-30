//Question on functions sum of n natural nummbers:-
#include<iostream>
#include<math.h>

using namespace std;

int addnatural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }return sum;
}

int main(){

int n;
cout<<"Enter the number\n";
cin>>n;

cout<<addnatural(n);


    return 0;
}