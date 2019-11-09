#include "BST.h"
//#include "NodeInterface.h"

using namespace std;

BST::BST(){
    root = NULL;
}
BST::~BST(){}


//Please note that the class that implements this interface must be made
//of objects which implement the NodeInterface

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
BST::Node * BST::getRootNode() const {
    return root;
}

/*
* Attempts to add the given int to the BST tree
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool BST::add(int data){
    return true;
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data){
    return true;
}

/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear(){
    return;
}

BST::Node * BST::find(Node *T){
    return T;
}
