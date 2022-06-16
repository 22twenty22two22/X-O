#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std; ///Импорт всего пространства имен std. Это пространство имен содержит все имена из стандартной библиотеки языка C++
char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; /// Задание матрицы
char player = 'X'; /// переменная для вывода
int n;

class game { ///Объявление класса
public: ///Доступное всем
//Функция 0
    void clear() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat[i][j] = 5;
            }
        }
        player = 'X';
        n = 0;
    }

//Функция 1
    void draw() {
//system("cls");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "   " << mat[i][j] << "   ";
            }
            cout << endl;
        }
    }

//Функция 2
    void input() { ///Функция ввода данных
        int a;
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "   It's " << player << " turn !\n   Press any number where you want to mark: ";
        cin >> a;
        cout << "\n";
//Для 1
        if (a == 1) { /// при нажатии на 1 проверяется, занята ли эта позиция
            if (mat[0][0] != 'X' && mat[0][0] != 'O') {
                mat[0][0] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 2
        if (a == 2) { /// при нажатии на 2 проверяется, занята ли эта позиция
            if (mat[0][1] != 'X' && mat[0][1] != 'O') {
                mat[0][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 3
        if (a == 3) { /// при нажатии на 3 проверяется, занята ли эта позиция
            if (mat[0][2] != 'X' && mat[0][2] != 'O') {
                mat[0][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 4
        if (a == 4) { /// при нажатии на 4 проверяется, занята ли эта позиция
            if (mat[1][0] != 'X' && mat[1][0] != 'O') {
                mat[1][0] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 5
        if (a == 5) { /// при нажатии на 5 проверяется, занята ли эта позиция
            if (mat[1][1] != 'X' && mat[1][1] != 'O') {
                mat[1][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 6
        if (a == 6) { /// при нажатии на 6 проверяется, занята ли эта позиция
            if (mat[1][2] != 'X' && mat[1][2] != 'O') {
                mat[1][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 7
        if (a == 7) { /// при нажатии на 7 проверяется, занята ли эта позиция
            if (mat[2][0] != 'X' && mat[2][0] != 'O') {
                mat[2][0] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 8
        if (a == 8) { /// при нажатии на 8 проверяется, занята ли эта позиция
            if (mat[2][1] != 'X' && mat[2][1] != 'O') {
                mat[2][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
//Для 9
        if (a == 9) { /// при нажатии на 9 проверяется, занята ли эта позиция
            if (mat[2][2] != 'X' && mat[2][2] != 'O') {
                mat[2][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "Try again! This cell is occupied.\n"; /// если занята, то сообщается об этом
                input();
            }
        }
    }

//Функция 3
    void player2() { /// функция проверки игрока (меняет игрока после его хода)
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

//Функция 4
    char win() { /// проверка выигрыша по строкам, столбцам и диагоналям
        if (mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X') ///проверяет первую строку на победу Х
            return 'X';

        if (mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X') ///проверяет вторую строку на победу Х
            return 'X';

        if (mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X') ///проверяет третью строку на победу Х
            return 'X';

        if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X') ///проверяет первый столбец на победу Х
            return 'X';

        if (mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X') ///проверяет второй столбец на победу Х
            return 'X';

        if (mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X') ///проверяет третий столбец на победу Х
            return 'X';

        if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X') ///проверяет диагональ на победу Х
            return 'X';

        if (mat[2][0] == 'X' && mat[1][1] == 'X' && mat[0][2] == 'X') ///проверяет диагональ на победу Х
            return 'X';

        if (mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O') ///проверяет первую строку на победу О
            return 'O';

        if (mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O') ///проверяет вторую строку на победу О
            return 'O';

        if (mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O') ///проверяет третью строку на победу О
            return 'O';

        if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O') ///проверяет первый столбец на победу О
            return 'O';

        if (mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O') ///проверяет второй столбец на победу О
            return 'O';

        if (mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O') ///проверяет третий столбец на победу О
            return 'O';

        if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O') ///проверяет диагональ на победу О
            return 'O';

        if (mat[2][0] == 'O' && mat[1][1] == 'O' && mat[0][2] == 'O') ///проверяет диагональ на победу О
            return 'O';

        return ('/');
    }
};

int main() {
    game g1;
    do {
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "      | X / O |\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        n = 0;
        g1.clear();
        g1.draw();
        while (1) {
            n++;
            g1.input();
            g1.draw();
            if (g1.win() == 'X') {
                cout << "Player 1 won!\n" << endl;
                break;
            } else if (g1.win() == 'O') {
                cout << "Player 2 won!\n" << endl;
                break;
            } else if (g1.win() == '/' && n == 9) {
                cout << "Draw!\n" << endl;
                break;
            }
            g1.player2();
        }
        cout << "Do you want to play again? Press (y/n)";
//system("pause");
    } while (getche() == 'y');
}
