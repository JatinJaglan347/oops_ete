#include <iostream>
#include <string>
using namespace std ;

int main (){
	string a ,b;
    cin>>a;
    cin>>b;
    int c=0;
    if(a!=b){
        for (int i=0 ; i < a.length(); i++){
            for (int j=0 ; j<b.length(); j++){
                if(a[i]==b[j]){
                    break;
                }
                else if(a[i]>b[j]){
                    c=1;
                    break;
                }
                else{
                    c=2;
                    break;
                }
            }
            if (c == 1 || c == 2) {
                break;
            }
        }
    }
    if(c==1){
        cout << a << " comes before " << b << " lexicographically.";
    }
    else if(c==2){
        cout << a << " comes after " << b << " lexicographically.";
    }
    else{
        cout << a << " and " << b << " are equal lexicographically.";
    }
	return 0;
}