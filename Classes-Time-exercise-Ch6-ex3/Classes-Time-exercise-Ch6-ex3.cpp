// Classes-Time-exercise-Ch6-ex3.cpp : Defines the entry point for the console application.
//

#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(): hours(0), minutes(0), seconds(0)
	{}

	Time(int hours_, int minutes_, int seconds_): hours(hours_), minutes(minutes_), seconds(seconds_)
	{}

	void AddTimeM()
	{
		std::cout << "Plase provide time" << std::endl;
		std::cout << "Hours in format HH: ";
		std::cin >> hours;
		std::cout << "Minutes in format MM: ";
		std::cin >> minutes;
		std::cout << "Seconds in format SS: ";
		std::cin >> seconds;
	}

	void Display()
	{
		std::cout << "Time is liquid...." << std::endl;
		std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
	}

	void TimeAdd(Time time1, Time time2);
};

void Time::TimeAdd(Time time1, Time time2)
	{ 
		hours = time1.hours + time2.hours;
		minutes = time1.minutes + time2.minutes;
		seconds = time1.seconds + time2.seconds;
	}


int main()
{
	Time Time1, Time3;

	Time Time2(13, 46, 12);

	Time1.AddTimeM();
	Time3.TimeAdd(Time1, Time2);
	
	std::cout << "Time 1: ";
	Time1.Display();
	std::cout << "Time 2: ";
	Time2.Display();
	std::cout << "Time 3: " ;
	Time3.Display();

	
	std::cout << std::endl;

	
	system("pause");
    return 0;
}

