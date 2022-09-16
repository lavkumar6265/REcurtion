#include<iostream>
using namespace std;

int check(string a,string b,int i ,int j){
    if(i == a.length() ||j == b.length()){
        return 0;
    }
    if(a[i]==b[j]){
        return 1+check(a,b,i+1,j+1);
    }
    else{
        return check(a,b,i,j+1);
    }
}

bool subsequnce(string a,string b){
    int i = 0,j =0;
    int ans = check(a,b,i,j);

    if(ans == a.length()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string a = "abc";
    string b = "klabdfrc";

    if(subsequnce(a,b)){
        cout<<"sequnce is present >> "<<endl;
    }
    else{
        cout<<"Not present >> "<<endl;
    }

    return 0;
}