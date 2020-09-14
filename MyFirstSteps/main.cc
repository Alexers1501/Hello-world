#include <iostream>//подключение заголовочных файлов
#include <cmath>
#include <iomanip>//компановка или верстка

constexpr double EPS = 0.0001;//предельная ошибка

int main()
{
	std::cout << "Будем решать квадратное уравнение" << std::endl;

	std::cout << "ax^2+bx+c=0" << std::endl;
	std::cout << "Введите коэффициенты a, b, c";
	double a, b, c;
	std::cin << a << b << c;

	double d;
	d = b*b - 4*a*c;

	if (d < -EPS){
		std::cout << "Нет действительных корней" <<std::endl;
	}
	//else(d == 0){}// Ник4ошда так не делать!!! оно вещественное
	else if (d < EPS){
		std::cout << "x = " <<(-b/2/a) << std::endl;
	}
	else{
		std::cout <<
				"x1 = " << ((-b-sqrt(d))/2 /a) << std::endl <<
				"x2 = " << ((-b+sqrt(d))/2 /a) << std::endl;
	}
	return 0;
}

