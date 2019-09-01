// 12 to 24 hour format converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "string"

class Time {
public:
	int hour;
	int minute;
	std::string stringMinute;
	int time() {
		std::cout << "What hour is it?\n";
		std::cin >> hour;
		std::cout << "What minute is it?\n";
		std::cin >> minute;
		if (minute < 10) {
			stringMinute = "0" + std::to_string(minute);

		}
		else {
			stringMinute = std::to_string(minute);
		}
		return 0;
	}
};


int main() {
	std::string mode;
	std::cout << "12to24 OR 24to12\n";
	std::cin >> mode;
	Time obj1;
	if (mode == "24to12") {
		obj1.time();
		if (obj1.hour >= 12) {
			std::cout << "It's " << obj1.hour - 12 << ":" << obj1.stringMinute << " PM";
		}
		else if (obj1.hour < 12) {
			std::cout << "It's " << obj1.hour << ":" << obj1.stringMinute << " AM";
		}
	}
	else if (mode == "12to24") {
		std::string morning;
		std::cout << "PM or AM?\n";
		std::cin >> morning;
		if (morning == "AM") {
			obj1.time();
			if (obj1.hour == 12) {
				std::cout << "It's 00:" << obj1.stringMinute;
			}
			else {
				std::cout << "It's " << obj1.hour << ":" << obj1.stringMinute;
			}
			}
		else if (morning == "PM") {
			obj1.time();
			if (obj1.hour == 12) {
				std::cout << "It's 12:" << obj1.stringMinute;
			}
			else {
				std::cout << "It's " << obj1.hour + 12 << ":" << obj1.stringMinute;
			}
			}
		else if (morning != "PM AM") {
			std::cout << "Try again\n";
			main();
		}
	}
	else {
		std::cout << "Try again!\n";
		main();
	}
	while (true) {

	}
	return 0;
}
