#include <iostream>
#include <string>

class Student
{
	public:
		std::string m_firstName{};
		int m_age{};
		int m_id{};
		double m_note{};
		
	void print()
	{
		std::cout << "First name: " << m_firstName << ", Age: " << m_age 
		<< ", Id: " << m_id 
		<< ", Note: " << m_note << std::endl;
	}
};

int main()
{
	Student roque{ "Roque", 19, 11, 8.9 };
	roque.print();
	Student piluca{ "Piluca", 17, 13, 9.1 };
	piluca.print();
	return 0;
}