#include<iostream>
using  namespace std;

void rec(int n){
    if(n=1){
        return;
    }
    rec(n-1);
    cout<<"the vale of n is this >> "<<n<<endl;
    if(n==1){
        cout<<"the value of n is 1 >> "<<n<<endl;
    }
    cout<<"programe is over >> "<<endl;
}
int main(){
    int n;
    cout<<"enter a value of n >> "<<endl;
    cin>>n;
    rec(n);

    return 0;
}