//
//  main.cpp
//  Contiene
//
//  Created by Carlos Botella Navarro on 21/10/21.
//

//------------------------------------------------
// Lista <R>, R --> contiene() --> bool
//------------------------------------------------
#include <iostream>
using namespace std;

bool contiene(int * p, int tam, int num){ // Bucle para ver si contiene el numero
    for (int i = 0; i < tam; i++) {
        if (p[i] == num) {
            return true;
        }
    }
    return false;
}
int main() {
    int num = 7;
    int lista[10] = {1,4,7,8,20,45,6,3,2,9};
    cout << contiene(&lista[0], 10, num) << endl;
}
