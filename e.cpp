#include <iostream>
#include <cmath>
using namespace std;
int main() {
int arr[100], t=0;
int  n;
cin>>n;

for(int i=0; i<n; i++)
    cin>>arr[i];

int min=arr[0];
for(int i=0; i<n; i++)
if(min>arr[i]){
    min=arr[i];
}
for(int i=0; i<n; i++)
    if(arr[i]!=min){
        t++;
    }
    else
    break;
arr[t]=arr[0];
arr[0]=min;

for(int i=0; i<n; i++){

cout<<arr[i]<<" ";
}


return 0;
}
