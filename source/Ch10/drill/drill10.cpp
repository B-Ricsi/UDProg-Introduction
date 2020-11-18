#include "std_lib_facilities.h"

struct Point
{
	int x,y;
};

vector<Point> original_points;
vector<Point> processed_points;

void get_points()
{
	int x ,y;
	
	while (cin >> x >> y )
	{
		original_points.push_back(Point{x,y});

		if(original_points.size()==7) break;
	}
}

void write_points()
{
	string name = "mydata.txt";

	ofstream ost {name};

	if (!ost) error ("Output error ", name);


	for (int i=0;i<original_points.size();++i)
	{
		ost << original_points[i].x << ' ' << original_points[i].y << endl;
	}

	
	ost.close();
}

void read_points()
{
	string name = "mydata.txt";
	int x,y;
	ifstream ist {name};

	while (ist >> x >> y)
	{
		processed_points.push_back(Point{x,y});
	}
}

int main()
{

	cout << "Please type 7 x,y pair integer\n";
	get_points();
	write_points();
	read_points();
	bool correct=false;
	for (int i=0; i<original_points.size(); i++)
	{
		if (original_points[i].x!=processed_points[i].x || original_points[i].y!=processed_points[i].y)
		{
			error("Something's wrong");
			break;
		}else
		{
			correct=true;
		}
		
	}
	if (correct==true)
	{
		cout << "Original points: \n";
		for (int i=0;i<original_points.size();++i)
		{
			cout << original_points[i].x << ' ' << original_points[i].y << endl;
		}
			cout << "Processed points: \n";
		for (int i=0;i<processed_points.size();++i)
		{
			cout << processed_points[i].x << ' ' << processed_points[i].y << endl;
		}
	}
	return 0;
}