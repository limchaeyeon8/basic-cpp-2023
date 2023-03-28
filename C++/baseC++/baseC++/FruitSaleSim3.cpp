#include <iostream>
using namespace;

class FruitSeller
{
private:
	const in APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money)
		: APPLE_PRICE(price)m numOfApples(num), myMoney(money)
	{}
	int SaleApples(int money)
		int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;

	return num;

	void ShowSaleResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money)
		: myMoney(money), numOfApples(0)	{}
	void BuyApples(FruitSeller& seller, int money);
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << "���� �Ǹ����� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}