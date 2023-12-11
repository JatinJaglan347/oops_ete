#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int duplicate = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                duplicate = arr[i];
            }
        }
    }
    cout << "Duplicate element: " << duplicate << endl;

    int sum = n * (n + 1) / 2;

    cout<<"sum"<<sum<<endl;
    
    int newsum = 0;
    for (int i = 0; i < n; i++) {
        newsum = newsum + arr[i];
    }
    cout<<"newsum"<<newsum<<endl;

    int missing = sum - newsum + duplicate;
    cout << "Missing element: " << missing << endl;
    return 0;
}