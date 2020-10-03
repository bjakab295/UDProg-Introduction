#include "../std_lib_facilities.h"

int main() 
{

	string first_name;
	string friend_name;
	string my_name = "My name";
	char friend_sex;
	int age=0;

	cout <<"Enter the name of the person you want to write to: ";
	cin >> first_name;

	cout <<"Enter the name of your mutual friend: ";
	cin >> friend_name;

	cout << "Enter 'm' for male or 'f' for female based on your mutual friend's sex: ";
	cin >> friend_sex;

	cout << "How old is your friend?: ";
	cin >> age;

	cout << "  Dear " << first_name << ", \nHow are you? I am fine. I miss you. \n";
	cout << "Have you seen " << friend_name << " lately? \n";

	if  (friend_sex == 'm')
		cout << "If you see " << friend_name << ", please ask him to call me. \n";
	else 
		cout << "If you see " << friend_name << ", please ask her to call me. \n";

	if (age < 0 || age > 110 )
		simple_error("you're kidding!");
	else
		cout << "I hear you just had your birthday and you are "<< age <<" years old now. \n";
	
	if (age < 12)
		cout << "You will be " << age + 1 << " next year. \n";
	else if (age == 17)
		cout << "Next year you will be able to vote. \n";
	else if (age > 70)
		cout << "I hope you are enjoying retirement. \n";

	cout << "Yours sincerely,	_______ _______		" << my_name << "\n";

	return 0;

}