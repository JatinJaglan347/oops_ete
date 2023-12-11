#include <iostream>
#include <string>
using namespace std;
int main(){
    string a = "jatin";
    int b = a.length();
    for (int i=0; i<b ; i++){
        for (int j=0 ; j<b-1-i ;j++){
            if (a[j]> a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<a;
    return 0;
}