/*
���ϸ� : CalculatorTutorial.cpp
�ۼ��� : ��ä��
*/

#include <iostream>
#include <cstring>
#include "Calculator.h"     // ������� ���
using namespace std;

int main()
{
	// ���̵�
	cout << "Calculator Console Application\n" << endl;

	cout << "Please enter the operation to perform.Format: a + b | a - b | a * b | a / b" << endl;
	cout << "Press 'Ctrl + c' to exit the program\n" << endl;
	
	Calculator res;			// ��ü ����
	while (true)			// while��
	{
		cout << "input >> ";
		double ax;
		double ay;
		char ari;

		cin >> ax >> ari >> ay;	// ��, �����ȣ �Է�


		cout << "result= " << res.Calculate(ax, ari, ay) << "\n" << endl;	// ����Լ� ȣ��, "input>>"���� ���ư�
	}
	return 0;
}