#include <iostream>//����������� ������������ ������
#include <cmath>
#include <iomanip>//���������� ��� �������

constexpr double EPS = 0.0001;//���������� ������

int main()
{
	std::cout << "����� ������ ���������� ���������" << std::endl;

	std::cout << "ax^2+bx+c=0" << std::endl;
	std::cout << "������� ������������ a, b, c";
	double a, b, c;
	std::cin << a << b << c;

	double d;
	d = b*b - 4*a*c;

	if (d < -EPS){
		std::cout << "��� �������������� ������" <<std::endl;
	}
	//else(d == 0){}// ���4���� ��� �� ������!!! ��� ������������
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

