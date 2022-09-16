#include<iostream>
using namespace std;

void incresing(int n){
    if(n==0){
        return;
    }
    incresing(n-1);
    cout<<n<<" ";
}
void dicresing(int n){
    if(n==0)
    return;

    cout<<n<<" ";
    dicresing(n-1);
}
void allele(int n){
    if (n==0)
    {
        return;
    }
    int i = 1;
    cout<<n<<" ";
    allele(n-1);
    cout<<n<<" ";
}
void dic_in(int n ,int cnt){
    if(n==0)
    return;
    cnt++;
    cout<<cnt<<" ";
    dic_in(n-1,cnt);
    cout<<cnt<<" ";
    cnt--;
}
int main(){
    int n;
    cout<<"enter a value of n >> "<<endl;
    cin>>n;

    // incresing(n);
    // dicresing(n);
    allele(n);
    cout<<endl;
    dic_in(n,0);

    return 0;
}