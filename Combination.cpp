#include<iostream>
using namespace std; 
int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r,a;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    a=n-r;
    cout<<fact(n)/(fact(r)*fact(a));
}