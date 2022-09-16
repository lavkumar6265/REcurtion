#include<iostream>
using namespace std;

void printsubseu(string s,int index ,string ans){
    if(index == s.length()){
        // cout<<"enter base case >> "<<endl;
        cout<<ans<<endl;
        return;
    }
    // cout<<"call include >> "<<endl;
    printsubseu(s,index+1,ans+s[index]);
    // cout<<"call eaxclude >> "<<endl;
    printsubseu(s,index+1,ans);
    // cout<<"program over >> "<<endl;
}
int main(){
    string ans = "";
    string s = "abc";

    printsubseu(s,0,ans);

    return 0;
}