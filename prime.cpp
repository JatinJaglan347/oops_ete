#include <iostream>
using namespace std;
int main(){
    int a ;
    cin>>a;
    bool isprime = 1;
    for (int i=2 ;i<a;i++){
        if (a % i == 0) {
            isprime = 0;
            break;
        }
    }
    if (isprime) {
        cout << "prime";
    } else {
        cout << "not prime";
    }
    return 0 ;

}