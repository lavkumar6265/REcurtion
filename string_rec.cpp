#include<iostream>
#include<algorithm>
using namespace std;

void solve(string &n,int i,int j){
    if(i>=j){
        return;
    }
    swap(n[i],n[j]);
    solve(n,i+1,j-1);
}
void reverse(string n,int index,string &ans){
    if(index == n.length()){
        return;
    }
    reverse(n,index+1,ans);
    ans.push_back(n[index]);
}
void addString(string a, string b, int carry, string& ans, int i, int j) {
    //base case
    if(i<0 && j<0 && carry == 0) {
        return;
    }

    int first = 0;
    int second = 0;
    
    if( i >= 0)
        first = a[i] - '0';

    if(j >= 0)
        second = b[j] - '0';

    int sum = first + second + carry;
    //HW - explore one more way to add without modulus operator
    int lastDigit = sum % 10;
    carry = sum/10;

    ans.push_back(lastDigit + '0');

    addString(a,b,carry,ans, i-1, j-1);

}

int main(){
    // string n = "ajjuq";
    // // solve(n,0,n.length()-1);
    // string ans = "";
    // reverse(n,0,ans);
    // for (int i = 0; i < ans.length(); i++)
    // {
    //     cout<<ans[i];
    // }
    string a = "1";
    string b = "1";

    string ans="";
    addString(a,b,0,ans, a.length()-1, b.length()-1);
    reverse(ans.begin(), ans.end());
    cout << "Sum is " << ans << endl;

    // cout<<"value of ans >> "<<ans<<endl;
    return 0;
}