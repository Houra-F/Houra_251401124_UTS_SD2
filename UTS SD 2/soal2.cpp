#include <iostream>
#include <string>
using namespace std;

struct Node { 
    int value;
    Node *next;
};

Node *head = NULL; 
Node *tail = NULL; 

void insertFirst(int x, string n, int skor, int n1) {
    
    Node *newNode = new Node;
    newNode -> value = n1;
    newNode -> next = NULL; 

    
    if (head == NULL){
        head = newNode;
        tail = head;
    } else {
        newNode-> next = head;
        head = newNode;
    }
}

void insertLast(int x, string n) {
    Node *newNode = new Node;
    newNode -> value = x;
    newNode -> next = NULL; 

    if (head == NULL){
        head = newNode; 
        tail = head; 
    } else {
        tail -> next = newNode; 
        tail = newNode;
    }
}

void insertAfter(int x, int n, int check) {
    if (head == NULL){
        cout << "List kosong, insert di depan dulu \n";
        return;
    }

    Node *newNode = new Node;
    newNode -> value = n;
    newNode -> next = NULL;

    Node *p = head; 
    while(p != NULL && p -> value != check){ 
        p = p -> next; 
    }  
    
    if (p == NULL) {
        cout << "Node dengan nilai " << check << " tidak ada\n";
        delete newNode; 
    } else {
        newNode -> next = p -> next;
        p -> next = newNode; 
        if (p == tail){
            tail == newNode;
        }
    }
}

void printList() {
    Node *temp = head;
    cout << "Isi dari linked list : ";
    while(temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL\n";
}

int main () {
    int pilih = 0, x, cari;
    int skor;
    string n;

    while (pilih != 5) {
        cout << "\n1. Insert depan\n2. Insert belakang\n3. Hapus data di awal\n";
        cout << "4. Tampilkan HANYA pendaftar yang Lolos (Skor >= 75) \n5. Keluar\nPilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Nama: ";
            cin >> x;
            insertFirst(x);
            printList();
        }
        else if (pilih == 2) {
            cout << "Nama: ";
            cin >> x;
            insertLast(n);
            printList();
        }
        else if (pilih == 3) {
            cout << "Nama awal: ";
            cin >> cari;
            cout << "Nama baru: ";
            cin >> x;
            insertAfter(cari, x);
            printList();
        }
        else if (pilih == 4) {
            while (skor >= 75){
            printList();
            }
        }
    }
    return 0;
}