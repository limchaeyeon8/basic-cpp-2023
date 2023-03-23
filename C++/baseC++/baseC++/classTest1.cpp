#include <iostream>
using namespace std;

class MyClass			// 암묵적약속- 클래스명 첫 문자는 대문자
{
private:				// *외부접근 불허
	int private_val;
public:					// *외부접근 가능
	int public_val;		
protected:				// *상속에서만 접근 가능
	int protected_val;	// 변수 선언

public:					// *멤버함수는 무조건 public
	void set(int an)
	{
		private_val = an;
	}

	void get()
	{
		cout << "public_val: " << public_val << endl;
		cout << "private_val: " << private_val << endl;

	}
};

int main()
{
	MyClass o;			// 객체 생성

	// 외부에서 접근할 수 있는 권한이 제한적이기 때문에 public만 가능
	//o.private_val;
	o.public_val = 100;		
	//o.protected_val;

	o.set(200);

	o.get();

	return 0;
}