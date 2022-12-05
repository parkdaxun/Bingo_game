#pragma once
#include <iostream>

using namespace std;

class Bingo
{
private:
	int box[5][5];
	int temp, ran1, ran2, ran3, ran4;
public:
	// 랜덤 박스 생성
	void Render();
	// 박스 보여주기
	void Print();
	// 빙고 업데이트
	void Update(int);
	// 빙고 체크
	int Check();
};

