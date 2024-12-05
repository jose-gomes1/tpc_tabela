#include "class.h"

Tpc::Tpc()
{
    this -> numero = 0;
}

void Tpc::Tabela()
{
    cout << "Qual é o tamanho da tabela? ";
    cin >> numero;
    cout << "\f";

    for (int i = 0; i <= numero + 1; i++) {
        cout << "-#-";
    }
    cout << endl;

    for (int i = 1; i <= numero; i++) {
        cout << "|" << setw(3) << i;
    }
    cout << "|";
    cout << endl;

    for (int i = 0; i <= numero + 1; i++) {
        cout << "--#";
    }
    cout << endl;

    for(int i = 1; i <= numero; i++){
        for(int x = 1; x <= numero; x++){
            cout << "|" << setw(3) << x * i;
        }
        cout << "|";
        cout << endl;
    }

    for (int i = 0; i <= numero + 1; i++) {
        cout << "#--";
    }
    cout << endl;
}
