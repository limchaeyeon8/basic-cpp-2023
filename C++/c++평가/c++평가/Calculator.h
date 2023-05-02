/*
파일명 : Calculator.h
작성자 : 임채연
*/

#pragma once
#ifndef __CALCULATOR_H_ 
#define __CALCULATOR_H_ 

class Calculator		// 클래스 생성
{
private:
	// 멤버변수 선언				
	double x;			
	double y;
	char cper;
public:				// public: 외부접근 / 멤버함수(메소드); 멤버변수의  접근을 위해 사용
	double Calculate(double x = 0, char cper = NULL, double y = 0);	// 생성자, 초기화

};

#endif 
