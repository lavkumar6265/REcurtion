#include<iostream>
using namespace std;

int solve(string a,string b,int i ,int j){
    if(i==a.length())
        return 0;

    if(j==b.length())
        return 0;

    int ans = 0;
    if(a[i]==b[i]){
        ans = 1+ solve(a,b,i+1,j+1);
    }
    else{
            ans = max(solve(a,b,i,j+1),solve(a,b,i+1,j));
    }
    return ans;
}
int main(){
    string a = "abcde";
    string b = "ace";
    int i = 0;
    int j =0;
    int ans = solve(a,b,i,j);
    cout<<"LCS is >> "<<ans<<endl;

    return 0;
}