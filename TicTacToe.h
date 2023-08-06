// TicTacToe.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <clocale>

using namespace std;

class T {
public:

	char matrisT[3][3] = { ' ',' ',' ',
							' ',' ',' ',
							' ',' ',' ' };

	void setT(int x, char n) {
		if (x == 1)
			matrisT[0][0] = n;
		else if (x == 2)
			matrisT[0][1] = n;
		else if (x == 3)
			matrisT[0][2] = n;
		else if (x == 4)
			matrisT[1][0] = n;
		else if (x == 5)
			matrisT[1][1] = n;
		else if (x == 6)
			matrisT[1][2] = n;
		else if (x == 7)
			matrisT[2][0] = n;
		else if (x == 8)
			matrisT[2][1] = n;
		else if (x == 9)
			matrisT[2][2] = n;
	}

	char getT(int x) {
		if (x == 1)
			return matrisT[0][0];
		else if (x == 2)
			return matrisT[0][1];
		else if (x == 3)
			return matrisT[0][2];
		else if (x == 4)
			return matrisT[1][0];
		else if (x == 5)
			return matrisT[1][1];
		else if (x == 6)
			return matrisT[1][2];
		else if (x == 7)
			return matrisT[2][0];
		else if (x == 8)
			return matrisT[2][1];
		else if (x == 9)
			return matrisT[2][2];
		else { return 'E'; }
	}
};








// TODO: Reference additional headers your program requires here.
