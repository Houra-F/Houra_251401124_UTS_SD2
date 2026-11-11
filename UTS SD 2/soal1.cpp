#include <iostream>
using namespace std;

int main(){ 
    int array [2][3][4];
    int angka = 1;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                array[i][j][k] = angka;
                angka += 2; 
            }
        }
    }
    
    for (int i = 0; i < 1; i++){
        cout << "Lapis " << 1 << endl; 
        angka = 2;
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++){
                cout << array[i][j][k] << "\t"; 
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++){
                array[i][j][k] = angka;
                angka += 2; 
            }
        }
    }

    for (int i = 0; i < 2; i++){
        cout << "Lapis " << 2 << endl; 
        angka = 2;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << array[i][j][k] << "\t"; 
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        cout << "lapis " << i + 1 << endl;
        for (int j = 0; j < 3; j++) {
            int total = 0;
            for (int k = 0; k < 3; k++)
                total += array[i][j][k] + array[i][j][k];
            cout << "Lapis " << j + 1 << ": " << total << endl;
        }
    }

    return 0;

}
