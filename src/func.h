struct Game {
    char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char player = 'X';
    int n;
    void clear();

    void draw();

    auto getCell(int a)  -> char &;

    void input();

    void player2();

    char win();

    void choose();
};