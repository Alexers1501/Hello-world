#include <iostream>//����������� ������������ ������
#include <cmath>
int main()
{
	std::cout << "����� ������������ �����" << std::endl;

	std::cout << "������� ������ � ����� ����������";
	double start, end;
	std::cin >> start>> end;

	std::cout << "������� ���";
	double step;
	std::cin >> step;;

	for (double x = start; x <= end; x += step){
		double  y = sin(x);
		std::cout << x << '|' << y << std::endl;
	}

	return 0;
}

