#include "my.h"
int foo;
int i;

int main()
{
	foo=7;

	print_foo();
	print(99);

	int x =7;
	int y =9;

	swap_v(x,y);
	swap_v(7,9);
	const int cx = 7;
	const int cy = 9;
	swap_cr(cx,cy);
	swap_cr(7.7,9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_r(dx,dy);
	swap_r(7.7,9.9);

	return 0;
}