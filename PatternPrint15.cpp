#include<iostream>
using namespace std; 
int main(){
    int n=5,count=5; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int k=1; k<=count; k++){
            cout<<k;
        }
        count--;
        cout<<endl;
    }
}