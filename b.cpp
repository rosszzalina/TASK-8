#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]<0 && arr[i+1]<0){
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
        else if(arr[i]>0 && arr[i+1]>0){
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
    }
    return 0;
}