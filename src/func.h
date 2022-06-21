struct Game {
    /// Матрица (игровое поле)
    char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    /// Переменная игрока
    char player = 'X';
    /// Переменная для подсчёта ходов (для ничьей после 9 хода)
    int n;

    void clear();

    void draw();

    auto getCell(int a)  -> char &;

    void input();

    void player2();

    char win();

    void choose();
};