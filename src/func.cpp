
#include "func.h"



/**
 * Функция, которая заполняет матрицу.
 */
void Game::clear() {
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
void Game::draw() {
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
auto Game::getCell(int a) -> char & {
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
void Game::input() {
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
void Game::player2() {
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
char Game::win() {
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
void Game::choose() {
    int c;
    cout << "   Chose who is going to be first (1-X | 2-O): ";
    cin >> c;
    if (c == 2)
        player = 'O';
}
