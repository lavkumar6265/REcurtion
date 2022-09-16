#include<iostream>
using namespace std;

int solve(int *arr,int n,int curr,int prev){
    if(curr == n){
        return 0;
    }
    //include
    int pick = 0;
    if(prev == -1 || arr[curr]>arr[prev]){
        pick = 1+solve(arr,n,curr+1,curr);
    }
    //exclude
    int notpick = 0+solve(arr,n,curr+1,prev);

    return max(pick,notpick);
}
int main(){
    int arr[] = {0,1,0,3,2,3};
    int n = 6;
    int curr = 0;
    int prev = -1;

    int ans = solve(arr,n,curr,prev);
    cout<<"LIS is > "<<ans<<endl;
    return 0;
}