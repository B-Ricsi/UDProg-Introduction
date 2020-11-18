#include "std_lib_facilities.h"

struct Date {
		 int year;
		 int month;
		 int day;
		Date(int y, int m, int d);
		void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");

	if (m <= 12 && m > 0)
		month = m;
	else
		error("Invalid month");

	if (d > 0 && d <= 31)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -=12;
		}
	}
}

void version2()
{
	Date today(1978, 6, 25);
	Date tomorrow = today;
	tomorrow.add_day(1);

	if (today.month<=9 && today.month>0)
	{
		cout << "Today: "  << today.year << "." << "0" << today.month << "." << today.day << "." << endl;
	}else
	{
		cout << "Today: " << today.year << "." << today.month << "." << today.day << "." << endl;
	}
	if (tomorrow.month<=9 && tomorrow.month>0)
	{
		cout << "Tomorrow: "  << tomorrow.year << "." << "0" << tomorrow.month << "." << tomorrow.day << "." << endl;
	}else
	{
		cout << "Tomorrow: " << tomorrow.year << "." << tomorrow.month << "." << tomorrow.day << "." << endl;
	}
}

int main()
{
	version2();

	return 0;
}