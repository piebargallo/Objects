#include <iostream>
#include <vector>

class Cal
{
public:
	using tipo_numero = int; // Alias de tipo
	// using tipo_numero = double;
	//typedef int tipo_numero;
	
	tipo_numero sum(tipo_numero a, tipo_numero b)
	{
		auto resul{ a + b };
		return resul;
	}
};

int main()
{
	Cal cal;
	std::cout << cal.sum(3, 4) << '\n';
	std::cout << cal.sum(4, 4) << '\n';
	
	return 0; 
}