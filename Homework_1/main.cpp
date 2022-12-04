#include <iostream>
#include "Homework_1.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Employee A{"A", 2, 3};
	Employee M{"M", 10, 12};
	AdressBook b1;
	Employee C{"C", 12, 10};
	AdressBook b2;
	
	std::cout << b1.Find_Employee(10) << std::endl;
	std::cout << b1.Find_Employee("Andrew") << std::endl;
	b1 = b1 + A;
	b1 = b1 + C;
	b1 = b1 + M;
	
	std::cout << b1 << std::endl;
	b1 = b1 - 10;
	b2 = b1;
	std::cout << b2 << std::endl;
	Employee temp = b2["M"];
	temp = b2["D"];
	b1.Delete_AdressBook();
	b2.Delete_Employee(3);
	b2.Delete_AdressBook();


	return 0;
}