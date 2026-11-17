#include<iostream>
using namespace std;
int main(){
    float n=5, i;
    for(i=1; i<=n; i++){
        for(int j=1; j<=n-1; j++){
            cout<<"  ";
            
            for(int k=n; k<=i; k++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}