#include <iostream>//����������� ������������ ������
#include <cmath>
#include <iomanip>//���������� ��� �������
int main()
{
	std::cout << "����� ������������ �����" << std::endl;

	std::cout << "������� ������ � ����� ����������";
	double start, end;
	std::cin >> start>> end;

	std::cout << "������� ���";
	double step;
	std::cin >> step;;

	std::cout <<
			"	x	|	sin(x)\n"
			"-----------------\n";

	std::cout << std::fixed;

	for (double x = start; x <= end; x += step){
		double  y = sin(x);
		std::cout <<
				std::setw(14) << std::setprecision(3) << x <<//setpre� ������� ������ ����� �����
				'|' <<
				std::setw(14) << std::setprecision(3) << y << std::endl;
	}

	return 0;
}

