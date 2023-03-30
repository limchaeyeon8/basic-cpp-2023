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
	int salary;		// �� �޿�					// �Ӽ� ������� 1��
public:
	PermanentWorker(const char* name, int money)// �� �ϳ��� ��ӹ޴� �θ� �Ӽ�
		: Employee(name), salary(money)			// �θ��� ������ ȣ��, ���� name���� ���� ����
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


class TemporraryWorker : public Employee		// �� 3���� �Ӽ�(�ϳ��� �θ�Ŭ����)
{
private:
	int workTime;
	int payPerHour;
public:
	TemporraryWorker(const char * name, int pay)// 3���� �Է°� ��� 2���� �Է°��� workTime�� 0���� �ڵ� �ʱ�ȭ
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
		cout << "salary: " << GetPay() << endl << endl;		// GetPay() ; �ӽ� ��ü(����x)
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
	EmployeeHandler handler;									// �������� �������� ����� ��Ʈ�� Ŭ������ ��ü ����

	//������ ���
	handler.AddEmployee(new PermanentWorker("LIM", 2000));		
	handler.AddEmployee(new PermanentWorker("KIM", 1300));

	//�ӽ��� ���
	TemporraryWorker * alba = new TemporraryWorker("SIM", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("RYU", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	handler.ShowAllSalaryInfo();								// �̹� �޿� �����ؾ� �� �޿��� ����

	handler.ShowTotalSalary();									// �̹� �޿� �����ؾ� �� �޿��� ����

	return 0;

}