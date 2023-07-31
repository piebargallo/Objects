#include <iostream>

class Date
{
private:
	int m_month{};
	int m_day{};
	int m_year{};
		
public:
	Date(int month, int day, int year = 2023) 
		: m_month{ month }, m_day{ day }, m_year{ year } {}
		
	void print()
	{
		std::cout << m_month << '/' << m_day
			<< '/' << m_year << std::endl;	
	}
};

int main() 
{
	Date date{ 07, 31 };
	date.print();
	return 0;
}