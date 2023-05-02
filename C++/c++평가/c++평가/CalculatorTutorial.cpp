/*
파일명 : CalculatorTutorial.cpp
작성자 : 임채연
*/

#include <iostream>
#include <cstring>
#include "Calculator.h"     // 헤더파일 사용
using namespace std;

int main()
{
	// 가이드
	cout << "Calculator Console Application\n" << endl;

	cout << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl;
	cout << "Press 'Ctrl + c' to exit the program\n" << endl;
	
	Calculator res;			// 객체 생성
	while (true)			// while문
	{
		cout << "input >> ";
		double ax;
		double ay;
		char ari;

		cin >> ax >> ari >> ay;	// 수, 연산기호 입력


		cout << "result= " << res.Calculate(ax, ari, ay) << "\n" << endl;	// 멤버함수 호출, "input>>"으로 돌아감
	}
	return 0;
}