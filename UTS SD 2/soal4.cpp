#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* root = NULL;

Node* buatNode(int data) {
    Node* baru = new Node;

    baru->data = data;
    baru->kiri = NULL;
    baru->kanan = NULL;

    return baru;
}

Node* insert(Node* root, int x) {
    if (root == NULL) {
        Node* baru = new Node;
        baru->data = x;
        baru->kiri = NULL;
        baru->kanan = NULL;
        return baru;
    }
    if (x < root->data)
        root->kiri = insert(root->kiri, x);
    else if (x > root->data)
        root->kanan = insert(root->kanan, x);
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->kiri);
    cout << root->data << " ";
    inorder(root->kanan);
}

int main() {
    Node* root = NULL;
    int angka;

    cout << "Data (In-Order) : " << endl;
    inorder(root);

    cout << "Masukkan angka (0 untuk berhenti):\n";

    while (true) {

        cout << "Input: ";
        cin >> angka;

        if (angka == 0){
            break;
        }
    
        root = insert(root,angka);
    }

    if (angka < 20){
        cout << "Nilai terkecil : " << angka;
    }

    if (angka == 70){
        cout << "Nilai terbesar: " << angka;
    }
    
    
    return 0;

}

