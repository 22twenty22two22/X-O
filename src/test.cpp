#include <doctest.h>
#include "func.cpp"

TEST_CASE("Testing clear field.")
{
    Game g;
    g.clear();
    REQUIRE(g.mat[0][0] == 3);
    REQUIRE(g.mat[0][1] == 3);
    REQUIRE(g.mat[0][2] == 3);
    REQUIRE(g.mat[1][0] == 3);
    REQUIRE(g.mat[1][1] == 3);
    REQUIRE(g.mat[1][2] == 3);
    REQUIRE(g.mat[2][0] == 3);
    REQUIRE(g.mat[2][1] == 3);
    REQUIRE(g.mat[2][2] == 3);
}

TEST_CASE("Testing victory.")
{
    Game g;
    g.mat[0][0] = 'X';
    g.mat[0][1] = 'X';
    g.mat[0][2] = 'X';
    REQUIRE(g.win() == 'X');
    g.mat[0][0] = 'O';
    g.mat[1][1] = 'O';
    g.mat[2][2] = 'O';
    REQUIRE(g.win() == 'O');
    g.mat[0][0] = 'O';
    g.mat[1][1] = 'X';
    g.mat[2][2] = 'O';
    REQUIRE(g.win() == '/');
    g.mat[0][0] = 'O';
    g.mat[1][0] = 'O';
    g.mat[2][0] = 'O';
    REQUIRE(g.win() == 'O');
    g.mat[0][1] = 'O';
    g.mat[1][1] = 'O';
    g.mat[2][1] = 'O';
    REQUIRE(g.win() == 'O');
}

TEST_CASE("Testing get_cell function.")
{
    Game g;
    g.mat[0][0] = 'X';
    g.mat[0][1] = 'X';
    g.mat[0][2] = 'X';
    g.mat[0][2] = 'X';
    g.mat[2][1] = 'O';
    REQUIRE(g.getCell(1) == 'X');
    REQUIRE(g.getCell(2) == 'X');
    REQUIRE(g.getCell(3) == 'X');
    REQUIRE(g.getCell(3) == 'X');
    REQUIRE(g.getCell(8) == 'O');
}
