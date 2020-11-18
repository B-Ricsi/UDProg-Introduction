#include "std_lib_facilities.h"

class Date {
private:
	int year, month, day;
public:
	class Invalid {};
	Date(int y, int m, int d): year(y), month(m), day(d) { if(!is_valid()) throw Invalid{}; }
	bool is_valid();
	void add_n_day(int n);
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }
};


bool Date::is_valid()
{
	if (month >= 1 || month  <= 12 || year >= 1 || day >= 1 || day <= 31)
		return true;
	else
		return false;
}

void Date::add_n_day(int n)
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

void version3()
{
	Date today(1978, 6, 25);
	Date tomorrow = today;
	tomorrow.add_n_day(1);
	if (today.get_month()<=9 && today.get_month()>0)
	{
		cout << "Today: " << today.get_year() << "." << "0" << today.get_month() << "." << today.get_day() << "."<< endl;
	}else
	{
		cout << "Today: " << today.get_year() << "." << today.get_month() << "." << today.get_day() << "."<< endl;
	}

	if (tomorrow.get_month()<=9 && tomorrow.get_month()>0)
	{
		cout << "Tomorrow: " << tomorrow.get_year() << "." << "0" << tomorrow.get_month() << "." << tomorrow.get_day() << "." << endl;
	}else
	{
		cout << "Tomorrow: " << tomorrow.get_year() << "." << tomorrow.get_month() << "." << tomorrow.get_day() << "." << endl;
	}
}

int main()
{
		version3();
		return 0;
}