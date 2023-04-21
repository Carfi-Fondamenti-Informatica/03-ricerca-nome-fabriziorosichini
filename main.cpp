#include <iostream>
using namespace std;

int main() {
    char lista_nomi[3][5] ;
    char nome[5] = {" "};
    cin >> lista_nomi[0];
    cin >> lista_nomi[1];
    cin >> lista_nomi[2];
    cout << endl;
    cin >> nome;
    if (lista_nomi[0][0]==nome[0]&&lista_nomi[0][1]==nome[1]&&lista_nomi[0][2]==nome[2]&&lista_nomi[0][3]==nome[3]) {
        cout << "0"<<endl;
     } else if (lista_nomi[1][0]==nome[0]&&lista_nomi[1][1]==nome[1]&&lista_nomi[1][2]==nome[2]&&lista_nomi[1][3]==nome[3]) {
        cout << "1"<<endl;
     } else if (lista_nomi[2][0]==nome[0]&&lista_nomi[2][1]==nome[1]&&lista_nomi[2][2]==nome[2]&&lista_nomi[2][3]==nome[3]) {
       cout << "2"<<endl;
     } else {
     cout << " "<<endl;
   }
    return 0;
}
