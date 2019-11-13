#include <iostream>

using namespace std;

int main(){
    int a;
    int& b = nullptr;
    a = 1;
    b = 2;
    b = a;
    cout << "a: " << a << ", b: " << b << endl; 
    
    return 0;
}