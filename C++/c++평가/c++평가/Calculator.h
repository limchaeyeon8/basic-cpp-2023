/*
���ϸ� : Calculator.h
�ۼ��� : ��ä��
*/

#pragma once
#ifndef __CALCULATOR_H_ 
#define __CALCULATOR_H_ 

class Calculator		// Ŭ���� ����
{
private:
	// ������� ����				
	double x;			
	double y;
	char cper;
public:				// public: �ܺ����� / ����Լ�(�޼ҵ�); ���������  ������ ���� ���
	double Calculate(double x = 0, char cper = NULL, double y = 0);	// ������, �ʱ�ȭ

};

#endif 
