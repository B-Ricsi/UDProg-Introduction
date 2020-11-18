#include "std_lib_facilities.h"

int main()
{

    int birth_year = 2001;
    cout<< birth_year << "\t(decimal)\n" <<
    hex << birth_year << "\t(hexadecimal)\n" <<
    oct << birth_year << "\t(octal)\n";

    int a, b, c, d;
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

    double num = 1234567.89;
    cout << defaultfloat << num << endl;
    cout << fixed << num << endl;
    cout << scientific << num << endl;

    cout << "Last_n" << setw(9) << "First_n" << setw(14) << "Telephone_n" << setw(14) << "E-mail_add" << endl;
    cout << "Bakos" << setw(11) << "Richárd" << setw(14) << "06202147087" << setw(28) << "richardbakos13@gmail.com" << endl;
    cout << "Bakos" << setw(11) << "Richárd" << setw(14) << "06202147087" << setw(28) << "richardbakos13@gmail.com" << endl;
    cout << "Bakos" << setw(11) << "Richárd" << setw(14) << "06202147087" << setw(28) << "richardbakos13@gmail.com" << endl;
    cout << "Bakos" << setw(11) << "Richárd" << setw(14) << "06202147087" << setw(28) << "richardbakos13@gmail.com" << endl;
    cout << "Bakos" << setw(11) << "Richárd" << setw(14) << "06202147087" << setw(28) << "richardbakos13@gmail.com" << endl;

    return 0;
}