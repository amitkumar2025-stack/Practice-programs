#include<iostream>
using namespace std;
int main(){
    int a,b,gcd = 1;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    
    if(b!=0){
        for(int i=1; a>=i && b>=i; i++){
            if(a%i==0 && b%i==0){
                gcd = i;
            }
        }
        cout<<"GCD is : "<<gcd;
    }

return 0;
}