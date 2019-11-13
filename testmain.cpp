#include "BST.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    BST tree;
    tree.add(1);
    tree.add(1);
    tree.add(2);
    tree.add(3);
    tree.add(5);
    tree.add(4);
    tree.add(8);
    tree.add(6);
    tree.add(7);
    bool youmeiyou = tree.remove(6);
    if(youmeiyou)
        cout << "it worked" << endl;
    return 0;
}