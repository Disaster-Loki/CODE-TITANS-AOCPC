#include <iostream>
#include <set>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Função para inserir valores na árvore
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Função para percorrer a árvore e armazenar os valores em um set
void collectValues(Node* root, set<int>& values) {
    if (root == nullptr)
        return;
    values.insert(root->value);
    collectValues(root->left, values);
    collectValues(root->right, values);
}

// Função para calcular o MEX de uma árvore
int calculateMex(const set<int>& values) {
    int mex = 0;
    while (values.find(mex) != values.end()) {
        mex++;  // Procurar o menor número que não está no set
    }
    return mex;
}

int main() {
    Node* root = nullptr;

    // Inserir alguns valores na árvore
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 0);
    root = insert(root, 1);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);

    // Coletar os valores da árvore em um set
    set<int> values;
    collectValues(root, values);

    // Calcular o MEX da árvore
    int mex = calculateMex(values);
    cout << "O MEX da árvore é: " << mex << endl;

    return 0;
}
