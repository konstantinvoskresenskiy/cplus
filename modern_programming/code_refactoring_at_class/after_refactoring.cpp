#include <cmath>
#include <iostream>

int main(int argc, char* argv[]) { 
	int day, month, year;
	std::cout << "Введите дату дня: " << std::endl;
	std::cin >> day;
	std::cout <<"Введите число месяца: "<< std::endl;
	std::cin >> month;
	std::cout << "Введите год: " << std::endl;
	std::cin >> year;

	int year_frac = year % 100;
	int year_whole = year / 100;
	int day_count = (
		day 
		+ (13 * month - 1) / 5 
		+ year_frac / 4 
		+ year_whole / 4 
		- 2 * year_whole 
	) % 7;
        
        if (day_count < 0) {
            day_count += 7;
}
	switch (day_count) {
		case 0:
			std::cout << "Воскресенье" << std::endl;
			break;
		case 1:
			std::cout << "Понедельник" << std::endl;
			break;
		case 2:
			std::cout << "Вторник" << std::endl;
			break;
		case 3:
			std::cout << "Среда" << std::endl;
			break;
		case 4:
			std::cout << "Четверг" << std::endl;
			break;
		case 5:
			std::cout << "Пятница" << std::endl;
			break;
		case 6:
			std::cout << "Суббота" << std::endl;
			break;
	}
	
	return 0;
}

