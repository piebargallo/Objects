#include <iostream>

class ClassDate
{
	public:
		int m_month{};
		int m_day{};
		int m_year{};
		
	void print()
	{
		std::cout << m_month << '/' << m_day << '/' << m_year << std::endl;
	}
};

int main()
{
	ClassDate date{ 07, 31, 2023 };
	date.print();
	return 0;
}