#define _CRT_SECURE_NO_WARNINGS
#include <iostream>u
#include <ctring
using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "��û ������ ����մϴ�___" << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(char * name, int initChag)
		: Computer(name), Battery(initChag)	{ }

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }

	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�___" << endl;
			return;
		}
	
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	INT GetBatteryInfo() { return Battery; }

};

class TableNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
};