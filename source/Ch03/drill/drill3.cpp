#include "std_lib_facilities.h"

int main()
{
		//2

         cout << "Please enter your first and second name (followed by 'enter'):\n";
         string first_name;
         string second_name;
         cin >> first_name >> second_name;
         cout << "Hello, " << first_name << second_name << "!\n";
         cout << "How are you, " << first_name <<' ' << second_name << "?\n";
         string answer;
         cin >> answer;
         cout << "I miss you!"<< "\n";
        
         //3

         cout << "Please enter a friend's name"<< "!\n";
         string friend_first_name;
         string friend_second_name;
         cin >> friend_first_name >> friend_second_name;
         cout << "Have you seen" <<' ' << friend_first_name <<' ' << friend_second_name <<' ' << "lately?"<< "\n";

         //4

         cout << "Please enter your friend's sex. If your friend is female enter 'f' or your friend is male enter 'm'" << "!\n";
         char friend_sex;
         cin >> friend_sex;
         if (friend_sex=='f')
         {
         		cout << "If you see" <<' ' << friend_first_name <<' ' << friend_second_name <<' ' <<"please ask her to call me." << "\n";
         }else	
         {
         		cout << "If you see" <<' ' << friend_first_name <<' ' << friend_second_name <<' ' <<"please ask him to call me." << "\n";
         }

         //5

         cout << "Please enter your age" << "!\n";
         int age;
         cin >> age;
         if (age<=0 || age>=110)
         {
         	simple_error("You're kidding!");

         }else

         {
         	cout << "I hear you just had a birthday and you are" <<' ' << age <<' ' << "years old." << "\n";

	         if (age<12)
	         {
	         	++age;
	         	cout << "Next year you will be" <<' ' << age << "\n";

	         }else

		     {
		         if (age==17)
		         {
		         	cout << "Next year you will be able to vote." << "\n";

		         }else

		         {
		         	if (age>70)
		         	{
		         		cout << "I hope you are enjoying retirement." << "\n";
		         	}

		         }

	         }

         }

         //6

         cout << "Yours sincerely," <<"\n" <<"\n" <<"Bakos Richárd" <<"\n";

         return 0;
}