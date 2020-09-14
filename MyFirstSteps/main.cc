#include <iostream>//подключение заголовочных файлов
#include <cmath>
#include <iomanip>//компановка или верстка
#include <complex>

constexpr double EPS = 0.0001;//предельная ошибка

int main()
{
	std::cout << "Будем решать квадратное уравнение" << std::endl;

	std::cout << "ax^2+bx+c=0" << std::endl;
	std::cout << "Введите коэффициенты a, b, c";
	std::complex <double> a, b, c;
	std::cin >> a >> b >> c;

	std::complex <double> d;
	d = b*b - 4.*a*c;

	//else(d == 0){}// Never do it!!! It is double
	if (d.real() < EPS and d.real() > -EPS){//This is 0 part or segment!
		std::cout << "x = " <<(-b/2. /a) << std::endl;
	}
	else{
		std::cout <<
				"x1 = " << ((-b-sqrt(d))/2.  /a) << std::endl <<
				"x2 = " << ((-b+sqrt(d))/2. /a) << std::endl;
	}
	return 0;
}

