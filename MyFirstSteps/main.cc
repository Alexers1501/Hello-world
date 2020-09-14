#include <iostream>//подключение заголовочных файлов
#include <cmath>
#include <iomanip>//компановка или верстка
#include <algorithm>
#include <string>
#include <sstream>

double read_double(const char * prompt)	{
	double result;	//
	std::string input;			//хранилище для вводной строки
	std::cout << prompt;		//вывод запроса
	std::getline(std::cin, input);//ввод строки
	std::stringstream input_ss {input};//создание потока
	input_ss >> result;				//чтерние
	if (input_ss.fail()){//если не получилось
		std::cerr<< "Неверный формат вещественного числа!" << std::endl;
		exit(1);				//аварийно завершаем работу
	}
	return result;				//выводим результат
}

int main()
{
	std::cout << "Будем табулировать синус" << std::endl;

	double start, end, step;
	std::string input;

	std::cout << "Введите начало и конец промежутка";
	std::getline(std::cin, input);
	std::stringstream start_end_string {input};// из строки сделали поток
	start_end_string >> start>> end;
	if (start_end_string.fail()) {
		std::cerr << "Неверный вввод!" << std::endl;
		return 1;
	}


	if (start > end) std::swap(start, end);// algorithm package, поменять переменные местами

	std::cout << "Введите шаг";
	std::getline(std::cin, input);
	std::stringstream step_string {input};
	step_string>> step;;
	if (step_string.fail()) {
			std::cerr << "Неверно указан шаг!" << std::endl;
			return 1;
		}
	if (step <= 0.){
		std::cerr << "Шаг должен быть положителдьным!" <<std::endl;
		return 1;
	}

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

