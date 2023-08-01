#include <iostream>

class Date
{
private:
	int m_month;
	int m_day;
	int m_year;
	
public:
	Date() = default;
	Date(int month, int day, int year)
	{
		setDate(month, day, year);
	}
	
	void setDate(int month, int day, int year)
	{
		m_month = month;
		m_day = day;
		m_year = year;
	}
	
	int getMonth() const { return m_month; }
	int getDay() const { return m_day; }
	int getYear() const { return m_year; }
};

int main()
{
	const Date date{ 07, 31, 2023 };
	std::cout << date.getMonth() << '/' << date.getDay() << '/'
		<< date.getYear() << std::endl;
	return 0;
}