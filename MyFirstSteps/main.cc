#include <iostream>//����������� ������������ ������
#include <cmath>
#include <iomanip>//���������� ��� �������
#include <algorithm>
#include <string>
#include <sstream>

double read_double(const char * prompt)	{
	double result;	//
	std::string input;			//��������� ��� ������� ������
	std::cout << prompt;		//����� �������
	std::getline(std::cin, input);//���� ������
	std::stringstream input_ss {input};//�������� ������
	input_ss >> result;				//�������
	if (input_ss.fail()){//���� �� ����������
		std::cerr<< "�������� ������ ������������� �����!" << std::endl;
		exit(1);				//�������� ��������� ������
	}
	return result;				//������� ���������
}

int main()
{
	std::cout << "����� ������������ �����" << std::endl;

	double start, end, step;
	std::string input;

	start = read_double("������� ������ ����������: ");
	end = read_double("������� ����� ����������");

	if (start > end) std::swap(start, end);// algorithm package, �������� ���������� �������

	step = read_double("������� ���");

	if (step <= 0.){
		std::cerr << "��� ������ ���� ��������������!" <<std::endl;
		return 1;
	}

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

