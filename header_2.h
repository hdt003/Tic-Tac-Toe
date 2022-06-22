#include <iostream>
using namespace std;

void TicTacToe::update()
{
    int pid = 1;
    int x;
    for (; occu <= 9; occu++)
    {
        cout << "Player No. " << pid << " Enter a Number to mark \n"
             << endl;
        cin >> x;
        if (x < 1 && x > 9)
        {
            cout << "Please Give Correct Number!!\n";
            occu--;
        }
        else
        {
            int i, j;
            i = (x - 1) / 3;
            j = (x - 1) % 3;
            if ((box[i][j] != 'X') && (box[i][j] != 'O'))
            {
                if (pid == 1)
                    box[i][j] = 'O';
                else
                    box[i][j] = 'X';
            }
            else
            {
                cout << "Please Give Correct Number!!\n";
                occu--;
                if (pid == 1)
                    pid = 0;
                else
                    pid++;
            }
        }
        print();
        int x = Check();
        if (x == 1)
        {
            cout << endl
                 << "Player " << pid << " Wins" << endl;
            break;
        }
        if (pid == 1)
            pid = 2;
        else
            pid--;
    }
    if (occu == 10)
    {
        cout << endl
             << "DRAW" << endl;
    }
}

void TicTacToe::print()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << box[i][j] << " ";
            if (j != 2)
                cout << "| ";
            else
                cout << " ";
        }
        cout << endl;
        cout << "_________";
        cout << endl;
    }
}

int TicTacToe::Check()
{
    if (box[0][0] == box[0][1] && box[0][1] == box[0][2])
        return 1;
    if (box[1][0] == box[1][1] && box[1][1] == box[1][2])
        return 1;
    if (box[2][0] == box[2][1] && box[2][1] == box[2][2])
        return 1;
    if (box[0][0] == box[1][0] && box[1][0] == box[2][0])
        return 1;
    if (box[0][1] == box[1][1] && box[1][1] == box[2][1])
        return 1;
    if (box[0][2] == box[1][2] && box[1][2] == box[2][2])
        return 1;
    if (box[0][0] == box[1][1] && box[1][1] == box[2][2])
        return 1;
    if (box[0][2] == box[1][1] && box[1][1] == box[2][0])
        return 1;

    else
        return -1;
}

TicTacToe::TicTacToe()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << box[i][j] << " ";
            if (j != 2)
                cout << "| ";
            else
                cout << " ";
        }
        cout << endl;
        cout << "_________";
        cout << endl;
    }
}