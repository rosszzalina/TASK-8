#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double arr[100];
int n;
cin>> n;

for(int i=0; i<n; i++){
    cin>>arr[i];
}
double max=abs(arr[0]);
for(int i=1; i<n; i++){
    if(arr[i]<0){
        arr[i]*=(-1);
    }

    if (abs(arr[i])>max){
        max=abs(arr[i]);
    
    }
}

cout<<fixed<<setprecision(2)<<max;

    return 0;
}