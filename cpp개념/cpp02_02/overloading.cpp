#include <iostream>
 
using namespace std;
 
class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX() 
	{
	}
	NUMBOX(int num1, int num2) : num1(num1), num2(num2)
	{
	}
	void ShowNumber() 
	{
		cout << "num1: " << num1 << ", num2: " << num2 << endl;
	}
	NUMBOX operator++()
	{
		num1+=1;
		num2+=1;
		return *this;
	}
	NUMBOX operator++(int)//후위연산자
	{
		NUMBOX temp(*this);
		num1+=1;
		num2+=1;
		return temp;
	}
};
 
int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2;
 
	nb2 = nb1++;
	nb2.ShowNumber();
	nb1.ShowNumber();
	
	nb2 = ++nb1;
	nb2.ShowNumber();
	nb1.ShowNumber();
}

//전위 연산을 함 return 후 연산 (나 자신)