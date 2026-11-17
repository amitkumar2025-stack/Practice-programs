#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<=1){
        cout<<"Not a prime number ";
    }
    bool prime = true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout<<"It is a prime number ";
    }
    else 
    cout<<"Not a prime number ";
    return 0;
    
}