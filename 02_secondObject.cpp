#include <iostream>

class ClassDate
{
	public:
		int m_month{};
		int m_day{};
		int m_year{};
};
	
void print(const ClassDate& date)
{
	std::cout << date.m_month << '/' << date.m_day << '/' << date.m_year << std::endl;
}


int main()
{
	ClassDate date{ 07, 31, 2023 };
	print(date);
	return 0;
}