#include "std_lib_facilities.h"

int main()
{

	vector<string> good;
	
		good.push_back("cm"); 
		good.push_back("m");
		good.push_back("in");
		good.push_back("ft");
	
 	bool legal(string unit)
	{
	    bool legal = false;
	    for (int i=0; i<good.size();++i)
	    {
	        if (unit == good[i])
	        {
	            legal = true;
	        }
	       	++i;

	    }
	    return legal;
	}

	double szam = 0;
	string unit = " ";
	double max = 0;
	double min = 0;
	int index = 0;
	double meter = 0;
	constexpr double cm_m = 0.01;
	constexpr double in_m = 2.54*cm_m;
	constexpr double ft_m = 12.0*in_m;

	double convert(double szam, string unit)
	{
	    if ("cm" == unit)
	    {
	        return szam * cm_m;
	    }
	    if ("in" == unit)
	    {
	        return szam * in_m;
	    }
	    if ("ft" == unit)
	    {
	        return szam * ft_m;
	    }
	    else 
	    {
	        return szam;
	    }
	}

	while(cin >> szam >> unit)
	{
		cout << "Legalunits: cm, m, in, ft" <<"\n";

        if (legal(unit))
        {
            meter= convert(szam, unit);
            cout << szam << unit;
            if (unit != "m")
            {
                cout << " (" << meter << "m)";
            }
        }

		if (index==0)
		{
			min=szam;
			max=szam;
			index++;
		}

		if (szam>max)
		{
			max=szam;
		}
		if (szam<min)
		{
			min=szam;
		}
		cout << "The smallest so far: " << min <<"\n";
		cout << "The largest so far: " << max <<"\n";

	}

	return 0;
}