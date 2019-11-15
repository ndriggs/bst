#include "BST.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    BST tree;
    tree.add(10);
    tree.add(5);
    tree.add(15);
    tree.add(8);
    tree.add(3);
    tree.add(4);
    tree.add(1);
    tree.add(7);
    tree.add(9);
    tree.add(12);
    tree.add(11);
    tree.add(14);
    tree.add(19);
    tree.add(22);
    tree.add(18);
    tree.remove(6);
    
    // test removing parent w 2 kids
    bool ten = tree.remove(10);
    if(ten)
        cout << "ten was removed" << endl;
    cout << "new root should be nine" << endl;
    BST::Node* groot = tree.getRootNode();
    cout << "RootNode has been obtained: " << groot << endl;
    if(groot == NULL)
        cout << "new root is null" << endl;
    else
        cout << groot->getData() << " is the current value of the root Node" << endl;
    return 0;
}