#include <iostream>

using namespace std;

int main()
{
    char e[100];
    int x;

    cout << "Escribe un enunciado (maximo 100 caractres):\n";
    cin.getline(e, 100);

    x = 0;
    cout << e[0];
    while ('\x0' != e[x]) {
        x = x + 1;
        char userInput_Text[3];
        if (e[x] == ' ') {
            cout << endl;
        }
        else {
            cout << e[x];
        }

    }
}