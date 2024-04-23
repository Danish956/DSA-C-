#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

   
}
