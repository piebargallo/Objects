#include <iostream>

class Date
{
private:
	int m_month{};
	int m_day{};
	int m_year{};
		
public:
	Date() : m_month{ }, m_day{ }, m_year{ } {}
	
	const int& getMonth() { return m_month; }
	void setMonth(int month) { m_month = month; }
	
	const int& getDay() { return m_day; }
	void setDay(int day) { m_day = day; }
	
	const int& getYear() { return m_year; }
	void setYear(int year) { m_year = year; }
};

int main() 
{
	Date date;
	date.setMonth(07);
	date.setDay(31);
	date.setYear(2023);
	std::cout << date.getMonth() << '/' << date.getDay() 
		<< '/' << date.getYear() << std::endl;
	return 0;
}