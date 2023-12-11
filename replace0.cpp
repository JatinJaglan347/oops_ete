#include <iostream>
using namespace std;
int main(){
    int a ,b,c;
    cin>>a;
    c=a;
    int d=0;
    while (a != 0){
        int f= a%10;
        if(f==0){
            f=5;
            
        }
        d = d*10 + f;
        a=a/10;
    }
    int e=0;
    while (d != 0){
        int f= d%10;
        e = e*10 + f;
        d=d/10;
    }
    cout<<e;
    return 0;
}