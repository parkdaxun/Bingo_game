#pragma once
#include <iostream>

using namespace std;

class Bingo
{
private:
	int box[5][5];
	int temp, ran1, ran2, ran3, ran4;
public:
	// ���� �ڽ� ����
	void Render();
	// �ڽ� �����ֱ�
	void Print();
	// ���� ������Ʈ
	void Update(int);
	// ���� üũ
	int Check();
};

