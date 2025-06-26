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

        //
        newNode->info = x;

        //
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //
        if (parent == nullptr)
        {
            //
            ROOT = newNode;

            //
            return;
        }

        //
        if (x < parent->info)
        {
            //
            parent->leftchild = newNode;

            //
            return;
        }
        //
        else if (x > parent->info)
        {
            //
            parent->rightchild = newNode;

            //
            return;
        }
    }

    bool isEmpty()
    {
        //
        return ROOT == nullptr;
    }

    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;
        inorder(ptr->leftchild);
        cout << ptr->info << " ";//
        inorder(ptr->rightchild);
    }

    void preorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;
            cout << ptr->info << " ";//
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }

    void postorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;
            
        postorder(ptr->leftchild);
        postorder(ptr->rightchild);
        cout << ptr->info << " ";//
    }


};
 
int main()
{

BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
}