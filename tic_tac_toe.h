#include<iostream>
#include<cmath>
using namespace std;
class XO
{
public:
	XO() {
		for (size_t i = 0; i <= 6; i++)
		{
			for (size_t j= 0; j <= 6; j++)
			{
				if (i % 2 == 0) { if (j == 6)cout << "-";else cout << "--"; }
				else { if (j % 2 == 0)cout << '|';else cout << "   "; }

			}
			cout << endl;
		}
	}
	bool check() {

	}
	void update(char c,int x,int y) {
		if (x >= 0 && x < 3 && y>=0 && y < 3)board[x][y] = c;
		else
		{
			cout << "unexitst" << endl;
		}
		for (size_t i = 0; i <= 6; i++)
		{
			for (size_t j = 0; j <= 6; j++)
			{
				if (i % 2 == 0) { if (j == 6)cout << "-";else cout << "--"; }
				else { if (j % 2 == 0)cout << '|';else  cout <<' ' << board[(i + 1) / 3][(j + 1) / 3]<<' '; }

			}
			cout << endl;
		}
	}
private:
	char board[3][3]{ ' ',' ',' ',' ',' ', ' ',' ',' ',' ' };
};


