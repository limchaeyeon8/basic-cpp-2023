#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << "¡Û" << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << "¡Ü" << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << "¢¹" << sim1.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << "¢º" << sim2.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	return 0;
}