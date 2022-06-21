#include<conio.h>
#include "src/func.h"///h
/**
 * Функция main
 */
int main() {
    /**
     * Вызов структуры игры
     */
    Game g1;
    do {
        cout <<"\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "    Game| X / O |\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        g1.choose();
        cout << "  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        g1.n = 0;
        g1.clear();
        g1.draw();
        while (true) {
            g1.n++;
            g1.input();
            cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
            g1.draw();
            if (g1.win() == 'X') {
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Player X won!" << endl;
                break;
            } else if (g1.win() == 'O') {
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Player O won!" << endl;
                break;
            } else if (g1.win() == '/' && g1.n == 9) {
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Draw!" << endl;
                break;
            }
            g1.player2();
        }
        cout << "   Do you want to play again? Press (y/n)";
//system("pause");
    } while (getche() == 'y');
}
