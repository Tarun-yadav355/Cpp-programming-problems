#include<bits/stdc++.h>
#include<math.h>

using namespace std;

bool check(int a,int b,int c){

    int n=max(a,b,c);
    int m,p;
    if(n==a){
        m=b;
        p=c;
    }else if(n==b){
        m=a;
        p=c;
    }else{
        m=a;
        p=b;
    }
    if(n*n==m*m+p*p)
        return true;
    else
        return false;
    
}

int main(){

int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;

cout<<check(a,b,c);

    return 0;
}