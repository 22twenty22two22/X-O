#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std; ///Импорт всего пространства имен std. Это пространство имен содержит все имена из стандартной библиотеки языка C++
char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; /// Задание матрицы
char player = 'X'; /// переменная для вывода
int n;

class game { ///Объявление класса
public: ///Доступное всем
//Функция 1
    void clear() { ///функция, которая в начале игры заполняет пустые ячейки матрицы символами
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat[i][j] = 3; ///можно менять на 1,2,3,4,5,6
            }
        }
//      player = 'X';
        n = 0;
    }

//Функция 2
    void draw() { ///Функция, которая выводит матрицу
//system("cls");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "   " << mat[i][j] << "   ";
            }
            cout << endl;///перевод на следующую строку
        }
    }

//Функция 3
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
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 2
        if (a == 2) { /// при нажатии на 2 проверяется, занята ли эта позиция
            if (mat[0][1] != 'X' && mat[0][1] != 'O') {
                mat[0][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 3
        if (a == 3) { /// при нажатии на 3 проверяется, занята ли эта позиция
            if (mat[0][2] != 'X' && mat[0][2] != 'O') {
                mat[0][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 4
        if (a == 4) { /// при нажатии на 4 проверяется, занята ли эта позиция
            if (mat[1][0] != 'X' && mat[1][0] != 'O') {
                mat[1][0] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 5
        if (a == 5) { /// при нажатии на 5 проверяется, занята ли эта позиция
            if (mat[1][1] != 'X' && mat[1][1] != 'O') {
                mat[1][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 6
        if (a == 6) { /// при нажатии на 6 проверяется, занята ли эта позиция
            if (mat[1][2] != 'X' && mat[1][2] != 'O') {
                mat[1][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 7
        if (a == 7) { /// при нажатии на 7 проверяется, занята ли эта позиция
            if (mat[2][0] != 'X' && mat[2][0] != 'O') {
                mat[2][0] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 8
        if (a == 8) { /// при нажатии на 8 проверяется, занята ли эта позиция
            if (mat[2][1] != 'X' && mat[2][1] != 'O') {
                mat[2][1] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
//Для 9
        if (a == 9) { /// при нажатии на 9 проверяется, занята ли эта позиция
            if (mat[2][2] != 'X' && mat[2][2] != 'O') {
                mat[2][2] = player; /// если ячейка не занята то ставится в эту ячейку
            } else {
                cout << "   Try again! This cell is occupied.\n\n"; /// если занята, то сообщается об этом
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                draw();
                input();
            }
        }
    }

//Функция 4
    void player2() { /// функция проверки игрока (меняет игрока после его хода)
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

//Функция 5
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

//Функция 6
    void choose() { /// Функция для выбора, кто будет ходить первым
        int c;
        cout << "   Chose who is going to be first (1-X | 2-O): ";
        cin >> c;
        if (c == 2)
            player = 'O';
    }
};

int main() {
    game g1; /// вызов класса игры
    do {
        cout <<"\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        cout << "    Game| X / O |\n";
        cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        g1.choose();
        cout << "  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        n = 0;
        g1.clear(); /// заполняется пустая матрица
        g1.draw(); ///вывод матрицы
        while (1) {///цикл повторения программым, который прервётся при наличии победы одного из игроков или ничьей
            n++;
            g1.input(); ///программа получсет данные и заполняет матрицу
            cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
            g1.draw(); /// вывод матрицы с обновленными данными
            if (g1.win() == 'X') { ///проверка наличия победы игрока Х
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Player X won!" << endl;
                break;///прерывает цыкл
            } else if (g1.win() == 'O') { ///проверка наличия победы игрока О
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Player O won!" << endl;
                break;///прерывает цыкл
            } else if (g1.win() == '/' && n == 9) { ///проверка наличия ничьей
                cout << "   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                cout << "\n   Draw!" << endl;
                break;///прерывает цыкл
            }
            g1.player2();/// смена игрока после каждого хода
        }
        cout << "   Do you want to play again? Press (y/n)"; /// после завершения игры можно начать заново
//system("pause");
    } while (getche() == 'y');///при нажатии на y игра начинается заново
}
