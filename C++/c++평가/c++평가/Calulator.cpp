/*
���ϸ� : Calculator.cpp
�ۼ��� : ��ä��
*/


#include <iostream>
#include <cstring>
#include "Calculator.h"     // ������� ���
using namespace std;

// �޼ҵ�
double Calculator::Calculate(double ax, char ari, double ay)    
{
	x = ax;
	y = ay;
	cper = ari;

    if (cper == '+')        // ���� cper�� ���ԵǴ� ���ڰ� '+'�� ���
        return x + y;           // �������� ��ȯ
    else if (cper == '-')   // ���� cper�� ���ԵǴ� ���ڰ� '-'�� ���
        return x - y;           // �������� ��ȯ
    else if (cper == '*')   // ���� cper�� ���ԵǴ� ���ڰ� '*'�� ���
        return x * y;           // �������� ��ȯ
    else if (cper == '/')   // ���� cper�� ���ԵǴ� ���ڰ� '/'�� ���
        return x / y;           // ���������� ��ȯ
    else
        return 0;           // '+', '-', '*', '/' �̿��� ���ڰ� �ԷµǸ� 0���� ����
}