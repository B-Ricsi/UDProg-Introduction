#include "std_lib_facilities.h"

int main()
{
	double szam1=0;
	double szam2=0;
	double max=0;
	double min=0;
	double max_now=0;
	double min_now=0;
	int index=0;
	while(cin >> szam1 >> szam2)
	{
		cout << "First number: " << szam1 << ' ' << "Second number: "<< szam2 << "\n";
 		
 		if (szam1==szam2)
 		{
 			cout << "The numbers are equal" <<"\n";
 		}

		if (szam1>szam2)
		{
			cout << "The smaller value is: " << szam2 <<"\n";
			cout << "The larger value is: " << szam1 <<"\n";
			min_now=szam2;
			max_now=szam1;
		}
		if (szam1<szam2)
		{
			cout << "The smaller value is: " << szam1 <<"\n";
			cout << "The larger value is: " << szam2 <<"\n";
			min_now=szam1;
			max_now=szam2;
		}

		if (abs(szam1-szam2)<=0.01 && abs(szam1-szam2)!=0)
		{
			cout << "The numbers are almost equal" <<"\n";
		}

		if (index==0)
		{
			min=min_now;
			max=max_now;
			index++;
		}

		if (min_now<min)
		{
			min=min_now;
		}

		if(max_now>max)
		{
			max=max_now;
		}
		cout << "The smallest so far: " << min <<"\n";
		cout << "The largest so far: " << max <<"\n";

	}

	return 0;
}