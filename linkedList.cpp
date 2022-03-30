#include <iostream>
using namespace std;

class Node{
public:
    int numm;

    Node *next;
    Node(int a , Node *n){
        numm =a , next = n;
    }
};

int main() {


    Node *nn = new Node(8, nullptr);
    Node *nb = new Node(6, nullptr);

    nn ->next = nb ;

    cout << nn->numm<< endl;
    cout << nn->next -> numm << endl;

    return 0;
}
