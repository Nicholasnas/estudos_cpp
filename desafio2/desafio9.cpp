#include <iostream>

using namespace std;

int main(){

    int* idade = new int [2];
    int soma = 0;

    for (int i=0; i<2;i++){
        cout << "Entre com idade da " << i+1<< " pessoa: ";
        cin >> idade[i];
        soma += idade[i];
    }
    cout << "Media eh " << soma/2 << endl;
}