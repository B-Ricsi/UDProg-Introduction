#include "std_lib_facilities.h"

	constexpr double cm_m = 0.01;
	constexpr double in_m = 2.54*cm_m;
	constexpr double ft_m = 12.0*in_m;

bool legal(string unit)
	{
		vector<string> good={"cm", "m", "in", "ft"};
	
	    for (int i=0; i<good.size();++i)
	    {
	        if (unit == good[i])
	        {
	        	return true;
	        }
	    }
	    return false;
	}

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

int main()
{

	double szam = 0;
	string unit = "";
	double max = 0;
	double min = 0;
	int index = 0;
	double meter = 0;
	double osszeg=0;
	double i_osszeg=0;

	cout << "Legalunits: cm, m, in, ft" <<"\n";
	vector<double> values;

	while(cin >> szam >> unit)
	{

	        if (legal(unit))
	        {
	            meter= convert(szam, unit);

	            if (unit == "m")
	            {  
	            	cout << szam <<' ' << unit <<"\n";
	            }

	            if (unit != "m")
	            {
	                cout << "Meter:" <<' ' << meter <<' ' <<"m" << "\n";
	            }
	        	if (szam==meter)
	        	{
	        		osszeg+=szam;
	        	}else
	        	{
	        		osszeg+=meter;
	        	}//<3

				if (index==0)
				{
					min=meter;
					max=meter;
					index++;
				}

				if (meter>max)
				{
					max=meter;
				}
				if (meter<min)
				{
					min=meter;
				}
				cout << "The smallest so far: " << min <<"\n";
				cout << "The largest so far: " << max <<"\n";
				cout << "The sum of values: " << osszeg <<" m"<<"\n";
				values.push_back(meter);

				sort(values);  
				
				for (int i=0;i<values.size();++i)
     			{

          			cout << values[i] << " ";

     			}
     			cout << "\n";

			}else

				{
					simple_error("Error: illegal unit!");
				}

	}

	return 0;
}