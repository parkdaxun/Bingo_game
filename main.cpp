#include "Bingo.h"
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#ifndef OBJECT_HANDLER_H_INCLUDED

int main() {
	int choose, bingo_input;
	while (true) {
		system("cls");
		cout << "========�̴ϰ��� õ��========" << endl;
		cout << "=     1 : ������ӽ���      =" << endl;
		cout << "=     0 : ����              =" << endl;
		cout << "=     Made by ����          =" << endl;
		cout << "=============================" << endl;
		cin >> choose;
		if (cin.fail() || choose > 4) {
			cout << "�ش� ��ȣ�� �ƴϹǷ� �����մϴ�" << endl;
			choose = 0;
			cin.clear();
			cin.ignore(999, '\n');
		}
		system("cls");
		if (choose == 0) {
			cout << "�̿��� �ּż� �����մϴ�." << endl;
			cout << "Made by ����" << endl;
			exit(0);
		}
		else if (choose == 1) {
			Bingo bingo;
			bingo.Render();
			while (true) {
				COORD pos = { 0, 0 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				cout << "        ���� 3���� �����!" << endl;
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
