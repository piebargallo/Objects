#include <iostream>

class Date
{
private:
	int m_month{};
	int m_day{};
	int m_year{};
		
public:
	Date() = default;
	Date(int month, int day, int year) 
		: m_month{ month }, m_day{ day }, m_year{ year } {}
	~Date() {}	
	void print()
	{
		std::cout << m_month << '/' << m_day
			<< '/' << m_year << std::endl;	
	}
};

int main() 
{
	Date date{ 07, 31, 2023 };
	date.print();
	return 0;
}