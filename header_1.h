#include <iostream>
using namespace std;

class TicTacToe
{
private:
    int occu = 1;
    char box[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

public:
    TicTacToe();
    void update();
    int Check();
    void print();
};