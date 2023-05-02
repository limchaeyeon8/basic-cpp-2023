/*
파일명 : Calculator.cpp
작성자 : 임채연
*/


#include <iostream>
#include <cstring>
#include "Calculator.h"     // 헤더파일 사용
using namespace std;

// 메소드
double Calculator::Calculate(double ax, char ari, double ay)    
{
	x = ax;
	y = ay;
	cper = ari;

    if (cper == '+')        // 변수 cper에 대입되는 문자가 '+'일 경우
        return x + y;           // 덧셈연산 반환
    else if (cper == '-')   // 변수 cper에 대입되는 문자가 '-'일 경우
        return x - y;           // 뺄셈연산 반환
    else if (cper == '*')   // 변수 cper에 대입되는 문자가 '*'일 경우
        return x * y;           // 곱셈연산 반환
    else if (cper == '/')   // 변수 cper에 대입되는 문자가 '/'일 경우
        return x / y;           // 나눗셈연산 반환
    else
        return 0;           // '+', '-', '*', '/' 이외의 문자가 입력되면 0으로 리턴
}