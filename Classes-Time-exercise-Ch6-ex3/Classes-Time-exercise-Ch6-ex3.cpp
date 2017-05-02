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
	Time TimeAdd(Time time1, Time time2)
	{
		Time time3;
		time3.hours = time1.hours + time2.hours;
		time3.minutes = time1.minutes + time2.minutes;
		time3.seconds = time1.seconds + time2.seconds;
		return time3;
	}
};


int main()
{
    return 0;
}

