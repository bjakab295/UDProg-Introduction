#include "std_lib_facilities.h"

int main() 
{

	string nev;
	
	char gender;
	
	int kor = 0;
	
	cout << "Írd be a nevet: \n";

	cout << "Barát neme: \n";
	
	cout << "Hány éves: \n";
	
	cin >> nev;
	
	cin >> gender;
	
	cin >> kor;
	
	cout << "Hello " << nev << ", \n";
	
	if  (gender == 'm')
		cout << "Ha látod a férfit, ";
	else 
		cout << "Ha látod a nőt, ";
		
	if (kor < 0 || kor > 130 )
		cout << "akkor hazudsz. \n";
	else
		cout << "akkor még él. \n";
	
	return 0;
	
}
