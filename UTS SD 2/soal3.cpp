#include <iostream>
using namespace std;

#define MAX 5 
int stack[MAX]; 
int top = -1; 

void push (char value) {
    if(top == MAX-1){
        cout << "Stack penuh ! \n";
    } else {
        top++; 
        stack[top] = value;
        cout << value << " ditambahkan dalam stack\n";
    }
}

char pop() {
    if (top == -1){
         cout << "Stack kosong ! \n";
    } else {
        char temp = stack[top];
        cout << "\n" << stack[top] << " dihapus dari Stack\n"; 
        top--;
        return temp;
    }
}


int main (){
     string kata, hasil;

    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    while (top != -1) { 
        hasil += pop();
    }

    if (kata == hasil){
        cout << "KATA INI ADALAH PALINDROM ";
    }

    cout << "Kata  : " << kata << endl;
    cout << "Hasil : " << hasil << endl;
    
    cout << endl;

    return 0;
}