#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[] = {90, 45, 88, 1, 12, 60};
    int a;

    a = sizeof(arr)/sizeof(arr[0]);

    for (int i=0 ; i<a ; i++){
        for (int j=0 ; j<a-1-i ; j++){
            if (arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }   
        }
    }
    for (int i=0 ; i<a ; i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}