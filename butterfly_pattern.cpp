#include<iostream>
using namespace std;

int main(){
    int row=5,column=10;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=10; j++){
            if(j<=i || j>=column){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        column--;
    }
    int columns=7;
     for(int i=row-1; i>=1; i--){
        for(int j=1; j<=10; j++){
            if(j<=i || j>=columns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        columns++;
    }
    return 0;

}