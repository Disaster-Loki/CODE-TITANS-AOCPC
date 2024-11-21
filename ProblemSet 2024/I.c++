/***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    I.c++                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: optimus-prime <marvin@42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 12:46:17 by optimus-prime     #+#    #+#              #
#    Updated: 2024/11/21 12:46:22 by optimus-prime    ###   ########.fr        #
#                                                                              #
# *****************************************************************************/

// Apenas um teste
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *left;
    Node *right;

    Node(int val): value(val), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root, int value) 
{
    if (root == nullptr) {
        cout << "Inserting " << value << endl;  // Debug
        return new Node(value);
    }
    if (value < root->value) {
        cout << "Going left: " << value << " < " << root->value << endl;  // Debug
        root->left = insert(root->left, value);
    } else {
        cout << "Going right: " << value << " >= " << root->value << endl;  // Debug
        root->right = insert(root->right, value);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = nullptr;

    // Inserindo valores na árvore binária de busca
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);

    cout << "Sorted tree: ";
    inorder(root);
    cout << endl;

    return 0;
}

