#include<iostream>
#include<vector>
using namespace std;

//simple print
void print1(int arr[],int size,int index){
    if(index==size){
        return;
    }
    cout<<arr[index]<<" ";
    print1(arr,size,index+1);
}

//poite array next element 
void print2(int arr[],int size,int count){
    if(count==size){
            return;
    }
    cout<<arr[0]<<" ";
    print2(arr+1,size,++count);
}

void reverse1(int arr[],int size,int index){
    if (index == size)
    {
        return ;
    }
    reverse1(arr,size,index+1);
    cout<<arr[index]<<" ";
    
}
void reverse2(int arr[],int size){
    if (size<0)
    {
        return;
    }
    cout<<arr[size]<<" ";
    reverse2(arr,size-1);
}
int getMax(int arr[],int size,int index){
    if(index == size){
        return 1;
    }
    int ans = max(arr[index],getMax(arr,size,index+1));
    return ans;

}

int  getMax2(int arr[],int size,int &maxi,int index){
    if(size<0){
        return maxi;
    }
    int ans = arr[index];
    // int chhotiproblem = getMax2(arr,size,maxi,index);
    maxi = max(ans,getMax2(arr,size-1,maxi,index));
}
int firstocco(int arr[],int size,int index,int element){
    int ans =0;
    if(index == size){
        return ans;
    }
    if(arr[index]==element){
        ans = index;
        return ans ;
    }
    firstocco(arr,size,index+1,element);
}
int lastocco(int arr[],int size,int element){
    int ans =0;
    if(size<0){
        return ans;
    }
    if(arr[size]== element){
        ans = size;
        return ans;
    }
    lastocco(arr,size-1,element);
}

vector<int>Allocco(int arr[],int size,int element,int index){
    vector<int>ans;
    if(index == size){
        return ans;
    }
    if(arr[index] == element){
        ans.push_back(index);
    }
    cout<<" uy"<<endl;
    Allocco(arr,size,element,index+1);
}
int main(){
    int n = 10;
    int index = 0;
    int arr[n] = {87,22,547,11,456,43,11,3355,98,44};
    // print1(arr,n,index);
    // print2(arr,n,0);

    // reverse1(arr,n,0);
    // reverse2(arr,n-1);
    // int ans = getMax(arr,n,0);
    // int maxi = INT16_MIN;
    // getMax2(arr,n-1,maxi,0);
    // cout<<"the max is this > "<<maxi<<endl;

    // int ans = firstocco(arr,n,0,547);
    // cout<<"first occo is this >> "<<ans<<endl;

    // int ans = lastocco(arr,n-1,11);
    // cout<<"last element is this >>> "<<ans<<endl;

    Allocco(arr,n,11,0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    
    return 0;
}