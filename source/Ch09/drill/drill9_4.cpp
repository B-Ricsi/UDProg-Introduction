#include "std_lib_facilities.h"

class Date {
public:
	enum Month {
		jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};

	Date(int y, Month m, int d): year(y), month(m), day(d) {}
	bool is_valid();
	void add_day(int n);
	int get_year() const { return year; }
	Month get_month() const { return month; }
	int get_day() const { return day; }
private:
	int year, day;
	Month month;
};

Date::Month operator++(Date::Month& month)
{
	month = (month == Date::Month::dec) ? Date::Month::jan : Date::Month(int(month)+1);
	return month;
}

bool Date::is_valid()
{
	if (month < 1 || month  > 12 || year < 0 || day < 1 || day > 31)
		return false;
	else
		return true;
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		++month;
		day -= 31;
		if (month == Date::Month::jan)
		{
			year++;
		}
	}
}

void version4()
{
	Date today(1978, Date::jul, 25);
	Date tomorrow = today;
	tomorrow.add_day(1);

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
		version4();
		return 0;
}