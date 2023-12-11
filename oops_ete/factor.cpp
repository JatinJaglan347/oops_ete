#include <iostream>
#include <string>
using namespace std ;

int main (){
	string a ,b;
	cin>>a;
	cin>>b;
	int c=0;
	int d=0;
	if(a.length() == b.length()){
		for (int i=0 ; i < a.length();i++){
			for(int j=0 ; j<b.length();j++){
				if (a[i] == b[j]){
					c++;
					break;
				}
			}
			if (c==a.length()){
				d=1;
				break;
			}
		}
	}
    
	if (d == 1){
		cout << "anagram";
	}
	else{
		cout << "not anagram";
	}
	return 0;
}