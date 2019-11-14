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
    tree.remove(6);
    tree.clear();
    
    bool work = tree.add(1);
    // test removing parent w 2 kids
    
    return 0;
}