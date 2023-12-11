#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a ,b,c ,g;
    cin>>a;
    c=a;
    int d=0;
    while (a != 0){
        d++;
        a=a/10;
    }
    c = g;
    int f=0;
    while(c!=0){
        b= c%10;
        int d=1;
        for (int i=0 ; i<d ;i++){
            d *= b;
        }
        f = f+d;
        c =c/10;

    }
    if(g==f){
        cout<<"Armstrong";
    }
    else{
        cout<<"not Armstrong"; 
    }
    return 0;
}