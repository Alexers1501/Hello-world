#include <iostream>//подключение заголовочных файлов
#include <cmath>
#include <iomanip>//компановка или верстка
int main()
{
	std::cout << "Ѕудем табулировать синус" << std::endl;

	std::cout << "¬ведите начало и конец промежутка";
	double start, end;
	std::cin >> start>> end;

	std::cout << "¬ведите шаг";
	double step;
	std::cin >> step;;

	std::cout <<
			"	x	|	sin(x)\n"
			"-----------------\n";

	std::cout << std::fixed;

	for (double x = start; x <= end; x += step){
		double  y = sin(x);
		std::cout <<
				std::setw(14) << std::setprecision(3) << x <<//setpreс сколько знаков после точки
				'|' <<
				std::setw(14) << std::setprecision(3) << y << std::endl;
	}

	return 0;
}

