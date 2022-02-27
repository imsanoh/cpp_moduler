#include <iostream>

struct Datestruct
{
	int year;
	int month;
	int day;
};

class DateClass
{
private:
	/* data */
public:
	int m_year;
	int m_month;
	int m_day;

void print()
{
	std::cout << m_year << "/" << m_month << "/" << m_day;
}
};

int main()
{
	DateClass birthDay { 1234, 1 ,23 };

	birthDay.m_year = 2000;
	birthDay.m_month = 5;
	birthDay.m_day = 29;
	birthDay.print();
}
