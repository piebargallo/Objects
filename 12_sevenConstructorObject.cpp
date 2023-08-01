#include <iostream>

class Date
{
private:
	int m_month{};
	int m_day{};
	int m_year{ 2023 };
		
public:
	Date() = default;
	
	Date(int month, int day, int year) 
		: m_month{ month }, m_day{ day }, m_year{ year } {}
		
	Date(int month, int day) 
		: m_month{ month }, m_day{ day } {}
		
	void print()
	{
		std::cout << m_month << '/' << m_day
			<< '/' << m_year << std::endl;	
	}
};

int main() 
{
	Date date1{ 07, 31, 2023 };
	date1.print();
	Date date2{ 07, 31 };
	date2.print();
	return 0;
}