#include <iostream>
using namespace std;

class Node
{
public:
int info;
Node *leftchild;
Node *rightchild;

//construktor for the node class
Node()
{leftchild = nullptr; //
    rightchild = nullptr; //
}
};

class BinaryTree {
    public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        //
        //
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }  
    }

    void insert()
    {
        int x;
        cout << "Masukkan Nilai";
        cin >> x;

        //
        Node *newNode = new Node();

       
}