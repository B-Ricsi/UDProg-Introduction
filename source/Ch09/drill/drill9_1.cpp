#include "std_lib_facilities.h"

struct Date {
		int year;
		int month;
		int day;
	};

void day(Date& dd, int y, int m, int d)
{
	if (y >= 1)
		dd.year = y;
	else
		error("Invalid year");

	if (m <= 12 && m >= 1)
		dd.month = m;
	else
		error("Invalid month");

	if (d >= 1 && d <= 31)
		dd.day = d;
	else
		error("Invalid day");
};

void add_one_day(Date& dd, int n)
{
	dd.day += n;
	if (dd.day > 31)
	{
		dd.month++;
		dd.day -= 31;
		if (dd.month > 12)
		{
			dd.year++;
			dd.month -= 12;
		}
	}
}

void version1()
{
	Date today;
	day(today, 1978, 6, 25);
	Date tomorrow = today;
	add_one_day(tomorrow, 1);
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
	version1();

	return 0;
}