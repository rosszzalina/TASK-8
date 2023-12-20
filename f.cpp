#include <iostream>
using namespace std;
int main() {
int arr[100],n,i;
cin>>n;
for (int i=0;i<n;i++) {
cin>>arr[i];
}
int max=0;
for (i=1;i<n;i++)
{
if (arr[i]>=arr[max]) max=i;
}
int swap=arr[max];
arr[max]=arr[n-1];
arr[n-1]=swap;
for(i=0;i<n; i++) {
cout <<arr[i]<< " ";
}
return 0;

}

