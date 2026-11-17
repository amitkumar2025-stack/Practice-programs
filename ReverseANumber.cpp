#include<iostream>
using namespace std;
int main(){
    int count,n;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        count=n%10;
        n=n/10;
        cout<<count;

    }

}