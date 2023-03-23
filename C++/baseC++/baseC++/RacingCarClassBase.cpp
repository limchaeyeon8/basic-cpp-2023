#include <iostream>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPEED = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

struct Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];		// ������ ID
	int fuelGauge;							// ���ᷮ
	int curSpeed;							// ����ӵ�

public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();					// ���� ���� ���
	void Accel();							// ����, �ӵ�����
	void Break();							// �극��ũ, �ӵ�����
};

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "������ ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;

}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPEED)
	{
		curSpeed = CAR_CONST::MAX_SPEED;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99;

	run99.InitMembers("run99", 100);

	run99.Accel();
	run99.Accel();
	run99.Accel();

	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}