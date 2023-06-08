+#include <bits/stdc++.h>
using namespace std;

template < class E>
struct Node {
    E element;
    //Node<E> *, * right;
    vector <Node <E>*> child;
    Node(E e = E(),
        vector<Node <E>* > c = vector< Node <E> * >(0, nullptr))
        :element(e), child(c) {}

    bool isleaf() const { return (!child.size()); }
    bool isInternal() const { return (child.size()); }
};

template < class E>

struct Tree {
private:
    Node< E>* root;

public:
    int height(Node<E>* v) {
        if (v->isleaf()) return 0;
        int h = 0;
        for (auto& Node : v->child) {
            h = max(h, height(node));
        }
        return h + 1;
    }
};
int main() {
    return 0;
}