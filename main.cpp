#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
/// Матрица
char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
/// Переменная игрока. Значения Х или О
char player = 'X';
/// Переменная, считающая количество ходов. Нужна для ничьей после 9 хода (n = 9)
int n;

/**
 * Объявление класса игры.
 */
struct game {

/**
 * Функция, которая в начале игры заполняет пустые ячейки матрицы символами.
 * Матрицу можно заполнить разными символами, меняя 3 на 1,2,4,5,6.
 */
    void clear() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat[i][j] = 3;
            }
        }
//      player = 'X';
        n = 0;
    }

/**
 * Функция, которая выводит матрицу.
 */
    void draw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "   " << mat[i][j] << "   ";
            }
            cout << endl;
        }
    }
/**
 * При выборе позиции возвращает матричное значение
 * @param a  - Позиция
 * @return Матричное значение
 */
    auto getCell(int a) -> char & {
        switch (a) {
            case 1: return mat[0][0];
            case 2: return mat[0][1];
            case 3: return mat[0][2];
            case 4: return mat[1][0];
            case 5: return mat[1][1];
            case 6: return mat[1][2];
            case 7: return mat[2][0];
            case 8: return mat[2][1];
            case 9: return mat[2][2];
       }
    }
/**
 * Функция ввода данных и проверки занятых позиций (ячеек матрицы).
 */
    void input() {
        ///Переменная, означающая позицию
        int a;
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "   It's " << player << " turn !\n   Press any number where you want to mark: ";
        cin >> a;
        cout << "\n";
        auto &cell = getCell(a);
        if (cell != 'X' && cell != 'O')
            cell = player;
        else {
            cout << "   Try again! This cell is occupied.\n\n";
            cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
            draw();
            input();
        }
    }

/**
 * Функция проверки игрока (меняет игрока после его хода)
 */
    void player2() {
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

/**
 * Проверка выигрыша по строкам, столбцам и диагоналям
 * @return X, если игрок X победил
 * @return O, если игрок O победил
 */
    char win() {
        if (mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X')
            return 'X';

        if (mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X')
            return 'X';

        if (mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X')
            return 'X';

        if (mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X')
            return 'X';

        if (mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')
            return 'X';

        if (mat[2][0] == 'X' && mat[1][1] == 'X' && mat[0][2] == 'X')
            return 'X';

        if (mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O')
            return 'O';

        if (mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O')
            return 'O';

        if (mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O')
            return 'O';

        if (mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O')
            return 'O';

        if (mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')
            return 'O';

        if (mat[2][0] == 'O' && mat[1][1] == 'O' && mat[0][2] == 'O')
            return 'O';

        return ('/');
    }

/**
 * Функция для выбора, кто будет ходить первым
 */
    void choose() {
        int c;
        cout << "   Chose who is going to be first (1-X | 2-O): ";
        cin >> c;
        if (c == 2)
            player = 'O';
    }
};

/**
 * Функция main
 */
int main() {
    /**
     * Вызов класса игры
     */
    game g1;
    do {
        cout <<"\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "    Game| X / O |\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        g1.choose();
        cout << "  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        n = 0;
        g1.clear();
        g1.draw();
        while (1) {
            n++;
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
            } else if (g1.win() == '/' && n == 9) {
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
