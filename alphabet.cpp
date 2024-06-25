#include<iostream>
using namespace std;
int main(){
    for(int i=65 ;i<=69; i++){
        for(int c = 65; c<=i; c++){
            cout <<(char)c;
        }
        cout<<endl;
    }
    return 0;
}
