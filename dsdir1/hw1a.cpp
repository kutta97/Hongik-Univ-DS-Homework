// 금속조형디자인과 3학년
// B743014 양혜진

#include <iostream>
#include "recta.h"
using namespace std;

int main()
{
	Rectangle r(2, 3, 6, 6), s(1, 2, 5, 9);

	cout << "<rectangle r>"; r.Print();
	cout << "<rectangle s>"; s.Print();
	if (r.SmallerThan(s))
		cout << "s is bigger";
	else if (r.EqualTo(s))
		cout << "Same size";
	else cout << "r is bigger";
	cout << endl;
}

