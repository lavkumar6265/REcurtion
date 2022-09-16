#include<iostream>
using namespace std;

int fecto(int a){

    if(a==1){
        return 1;
    }

    return a*fecto(a-1);

}
int main(){
    int n;
    cout<<"enter a value of n >> "<<endl;
    cin>>n;

    cout<<"fectorial n value is this >> "<<fecto(n)<<endl;
    return 0;
}