#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,d ;
    cin>>a;
    string b ="aeiou";
    
    for (int i=0 ; i<a.length();i++){
        bool e =0;
        for (int j=0 ; j<b.length();j++){
            if(a[i]==b[j]){
                e=1;
                break;
            }
            
        }
        if(!e){
            d = d+a[i];
        }
    }
    cout<<d;
    return 0;
}