#include <iostream>
#include <cmath>
using namespace std;
int main() {
int arr[100];
int  n;
cin>>n;

for(int i=0; i<n; i++){
    cin>>arr[i];
}
int min=arr[0];
int max=arr[0];
for(int i=0; i<n; i++)
if(max<arr[i]){
max=arr[i];
}
for(int i=0; i<n; i++)
if(min>arr[i]){
    min=arr[i];
}

cout<<max-min;
return 0;
}
