#include <iostream>
using namespace std;
int main(){
    int a ,b,c;

    cin>>a;
    
    c=a;
    int d=0;
    while (a != 0){
        int f= a%10;
        d= d*10 + f;
        a=a/10;
    }
    cout<<d<<endl;
    if (c == d){
        cout <<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0 ;

}