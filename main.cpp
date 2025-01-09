#include <iostream>
using namespace std;
int main() {
    int i, l, z;
    i = 0;
    l = 0;
    z = 0;
    
    string v[5];
    v[0] = "Mia Martini";
    v[1] = "Anna Oxa";
    v[2] = "Renato zero";
    v[3] = "Adriano Celentano";
    v[4] = "Riccardo Cocciante";
    
    string w[5];
    w[0] = "Bob Marley";
    w[1] = "Lil T Jay";
    w[2] = "John Lennon";
    w[3] = "Elvis Presley";
    w[4] = "Juice World";
    
    while (i <= 9) {
        cout << "Il " << i + 1 << "° cantante è " << w[i] << "." << endl;
        i = i + 1;
    }
    
    int x[10];

    while (i <= 9) {
        x[i] = l + 1;
        cout << "Il " << l + 1 << "° numero è " << x[l] << endl;
        if (x[l] % 2 == 0) {
            cout << "Numero pari: " << x[l] << endl;
        } else {
            cout << "Numero dispari: " << x[l] << endl;
        }
        l = l + 1;
    }
    
    int y[10];

    while (z < 10) {
        y[z] = 2 * (z + 1);
        cout << "Il " << z + 1 << "° numero è " << y[z] << endl;
        z = z + 1;
    }
    
    cout << v[0] << endl;
    cout << v[2] << endl;
    cout << v[4] << endl;
    return 0;
}