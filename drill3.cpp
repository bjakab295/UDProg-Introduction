#include "std_lib_facilities.h"

int main() 
{

	double a = 0, b = 0;
	
	cout << "Írd be az 'a' és 'b' számodat: \n";
	
	while (cin >> a >> b)
	{
	
		cout << "a= " << a << " b= " << b << endl;
	
		if (a<b)
			cout << "'b' nagyobb: " << b << "\n";
		if (a>b)
			cout << "'a' nagyobb: " << a << "\n";
		if (a==b)
			cout<< "egyenlőek \n";
		else if (abs(a - b) <= 0.1)
			cout << "majdnem egyenlőek \n";
			
		break;
	
	}

	return 0;

}
