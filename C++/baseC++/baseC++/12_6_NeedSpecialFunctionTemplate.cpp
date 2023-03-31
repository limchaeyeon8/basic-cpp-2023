// �Լ� ���ø��� Ư��ȭ(Specialization) �� ���� �ڵ�

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;				// return a > b ? a : b; ���� �����̶� 15
	cout << Max('T', 'Q') << endl;				// ���̶� T ��ȯ
	cout << Max(3.5, 7.5) << endl;				// �����̶� 7.5
	cout << Max("Simple", "Best") << endl;		// ���ڿ� ��� / ���̺�X / ù ���� �� / Simple ��� ------ �ܼ� �ּҰ� �񱳰���� ��ȯ(�ǹ� ����)

	return 0;
}