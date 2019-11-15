#include "BST.h"
//#include "NodeInterface.h"

using namespace std;

BST::BST(){
    root = NULL;
}
BST::~BST(){
    clear();
}


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
    return insert(root, data);
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data){
    return take_away(root, data);
}

/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear(){
    clear_up(root);
    root  = NULL;
}

bool BST::insert(Node*& tree, int val){
    if(tree == NULL){
        tree = new Node(val);
        return true; //we successfully added it
    }
    if(tree->value == val)
        return false; //can't add it, it's already there
    if(val < tree->value)
        return insert(tree->left, val);
    else
        return insert(tree->right, val);
}

bool BST::take_away(Node *&tree, int data){
    if(tree == NULL)
        return false; //couldn't find it
    if(tree->value == data){
        if(tree->left == NULL){
            Node *tempNode = tree;
            tree = tree->right;
            delete tempNode;
            return true;
        } else if(tree->right == NULL){
            Node *tempNode = tree;
            tree = tree->left;
            delete tempNode;
            return true;
        }else{
            Node *inorderPredecessor = tree->left;
            while(inorderPredecessor->right != NULL)
                inorderPredecessor = inorderPredecessor->right;
            int newKing = inorderPredecessor->value;
            tree->value = newKing;
            take_away(tree->left, newKing);
            return true;
        }
    }
    if(data < tree->value)
        return take_away(tree->left, data);
    else
        return take_away(tree->right, data);
    
}

void BST::clear_up(Node *&tree){ 
    if(tree == NULL){
        return;
    }
    clear_up(tree->left);
    clear_up(tree->right);
    delete tree;
}
