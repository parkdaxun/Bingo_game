#include "Bingo.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#ifndef OBJECT_HANDLER_H_INCLUDED

int main() {
	int choose, bingo_input;
	while (true) {
		system("cls");
		cout << "========미니게임 천국========" << endl;
		cout << "=     1 : 빙고게임시작      =" << endl;
		cout << "=     0 : 종료              =" << endl;
		cout << "=     Made by 다은          =" << endl;
		cout << "=============================" << endl;
		cin >> choose;
		if (cin.fail() || choose > 4) {
			cout << "해당 번호가 아니므로 종료합니다" << endl;
			choose = 0;
			cin.clear();
			cin.ignore(999, '\n');
		}
		system("cls");
		if (choose == 0) {
			cout << "이용해 주셔서 감사합니다." << endl;
			cout << "Made by 다은" << endl;
			exit(0);
		}
		else if (choose == 1) {
			Bingo bingo;
			bingo.Render();
			while (true) {
				COORD pos = { 0, 0 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				cout << "        빙고 3개를 맞춰라!" << endl;
				cout << endl;
				bingo.Print();
				cin >> bingo_input;
				bingo.Update(bingo_input);
				int check = bingo.Check();
				if (check == 3) {
					break;
				}
			}
		}
	}
	return 0;
};

#endif
