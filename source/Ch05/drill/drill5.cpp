#include "std_lib_facilities.h"
int main()
try {
        cout << "Success!\n";

		cout << "Success!\n";

		cout << "Success" << "!\n";

		cout << "Success!" << "\n";

		int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

		vector<int> a(10); a[5] = 7; if (a[5]==7) cout << "Success!\n";

		bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";

		bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

		string s = "ape"; bool d = true; if (d) cout << "Success!\n";

		string q = "ape"; if (q=="ape") cout << "Success!\n";

		string w = "ape"; if (w=="ape") cout << "Success!\n";

		string r = "ape"; if (r=="ape") cout << "Success!\n";

		vector<char> e(5); for (int i=0; 0>e.size(); ++i) ; cout << "Success!\n";

		vector<char> f(5); for (int i=0; i>f.size(); ++i) ; cout << "Success!\n";

		string t = "Success!\n"; for (int i=0; i<=8; ++i) cout << t[i];

		if (true) cout << "Success!\n"; else cout << "Fail!\n";

		int n = 2000; char u = n; if (u==2000) cout << "Success!\n";

		string o = "Success!\n"; for (int i=0; i<=8; ++i) cout << o[i];

		vector<int> y(8); for (int i=0; i<=y.size(); ++i) ; cout << "Success!\n";

		int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";

		int x = 2; double m = 5.0/x+2.0; if (m==2*x+0.5) cout << "Success!\n";

		string l = "Success!\n"; for (int i=0; i<=8; ++i) cout << l[i];

		int ia=0; int asd=0; while (ia<10) ++ia; if (asd<ia) cout << "Success!\n";

		int xa = 4; double dsa = 5.0/xa+2.0; if (dsa==2*xa+0.5) cout << "Success!\n";

		cout << "Success!\n";

          keep_window_open();
          return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}
