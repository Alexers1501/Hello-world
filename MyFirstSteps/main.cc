#include <iostream>//подключение заголовочных файлов
#include <cmath>
int main()
{
	std::cout << "Ѕудем табулировать синус" << std::endl;

	std::cout << "¬ведите начало и конец промежутка";
	double start, end;
	std::cin >> start>> end;

	std::cout << "¬ведите шаг";
	double step;
	std::cin >> step;;

	for (double x = start; x <= end; x += step){
		double  y = sin(x);
		std::cout << x << '|' << y << std::endl;
	}

	return 0;
}

