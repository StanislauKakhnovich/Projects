#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter your name.\n";
	string first_name = "????";
	cin >> first_name;
	cout << "Hi, " << first_name << "!\n";
	cout << "Dear " << first_name << ',';
	cout << "\nHow are you?\nI'm fine.\nI miss you.\n";
	cout << "Please enter your friend's name.\n";
	string friend_name = "????";
	cin >> friend_name;
	cout << "How long have you met " << friend_name << "?\n";
	char friend_sex = '0';
	cout << "What is the gender of your friend? If male, enter m. If female, enter f.\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name 
		<< ", please ask him to call me back.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name
		<< ", please ask her to call me back.\n";
	cout << "How old are you?\n";
	int age = 1;
	cin >> age;
	if (age <= 0 || age >= 110) simple_error("Are you kidding?"); 
	cout << "I heard you just celebrated your birthday and turned " << age <<".\n";
	if (age < 12) cout << "You will be " << ++age << " next year.\n";
	if (age == 17) cout << "You can vote next year.\n";
	if (age > 70) cout << "I hope you don't miss your retirement.\n";
	cout << "Sincerely yours.\n"<<'\n'<<'\n'<<"ASUS TUF DASH F15\n";

}