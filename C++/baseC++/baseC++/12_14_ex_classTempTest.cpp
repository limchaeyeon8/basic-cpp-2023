#include <iostream>

template <typename T>			// class �Ϲ�ȭ
class CTest
{
private:
	T data;
public:
	CTest(T adata) : data(adata)	{ }
	T getData()
	{
		return data;
	}
};

template<>						// class template Ư��ȭ
class CTest<char>
{
private:
	char data;
public:
	CTest(char adata) : data(adata)	{ }
	char getData()
	{
		return data;
	}
};

int main()
{
	CTest<int> obj1(10);
	std::cout << obj1.getData() << std::endl;
	CTest<char> obj2('a');
	std::cout << obj2.getData() << std::endl;

	return 0;
}