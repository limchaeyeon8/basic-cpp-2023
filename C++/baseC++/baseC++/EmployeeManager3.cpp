#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}

	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}

	virtual int GetPay() const
	{
		return 0;
	}

	virtual void ShowSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;		// 월 급여					// 속성 멤버변수 1개
public:
	PermanentWorker(const char* name, int money)// ㄴ 하나는 상속받는 부모 속성
		: Employee(name), salary(money)			// 부모의 생성자 호출, 윗줄 name으로 인자 전달
	{
		salary = money;
	}

	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};


class TemporraryWorker : public Employee		// 총 3개의 속성(하나는 부모클래스)
{
private:
	int workTime;
	int payPerHour;
public:
	TemporraryWorker(const char * name, int pay)// 3개의 입력값 대신 2개의 입력값과 workTime을 0으로 자동 초기화
		: Employee(name), workTime(0), payPerHour(pay)	{ }

	void AddWorkTime(int time)
	{
		workTime += time;
	}

	int GetPay() const
	{
		return workTime * payPerHour;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;		// GetPay() ; 임시 객체(저장x)
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char*name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)	{ }

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)	{ }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		
		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHandler handler;									// 직원관리 목적으로 설계된 컨트롤 클래스의 객체 생성

	//정규직 등록
	handler.AddEmployee(new PermanentWorker("LIM", 2000));		
	handler.AddEmployee(new PermanentWorker("KIM", 1300));

	//임시직 등록
	TemporraryWorker * alba = new TemporraryWorker("SIM", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("RYU", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	handler.ShowAllSalaryInfo();								// 이번 달에 지불해야 할 급여의 정보

	handler.ShowTotalSalary();									// 이번 달에 지불해야 할 급여의 총합

	return 0;

}