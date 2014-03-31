// ADS2 CA1
// Chris Nicholl - X00073131
// Gary Francis Smith - X00080112

/***************************************************************************************
*    Title: <title of program/source code>
*    Author: <author(s) names>
*    Date: <date>
*    Code version: <code version>
*    Availability: http://rosettacode.org/wiki/Caesar_cipher#C.2B.2B
 
*
***************************************************************************************/
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

class Caeser{
private:
	int shift;
public:
	Caeser(int s):shift(s){}
	char operator()(char c)
	{
		if (isspace(c))
			return ' ';
		else{
			static string letters("abcdefghijklmnopqrstuvwxyz");
			string::size_type found = letters.find(tolower(c));

			int shiftedPosition = (static_cast<int>(found)+shift) % 26;
			if(shiftedPosition<0)
				shiftedPosition=26+shiftedPosition;
			char shifted=letters[shiftedPosition];
			return shifted;
		}
	}
};

/*int main(){
	int shifts = 0;

	ifstream ifs("input.txt");
	string input((istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	
	cout << "Shift letters how many spaces?\n";
	cin >> shifts;

	cout << "No Encryption:\n" << input << endl;
	transform(input.begin(), input.end(), input.begin(),

	Caeser(shifts));
	cout <<endl<< "Caeser Encryption:\n" << endl << endl;
	cout << input<< endl;
	shifts *= -1;

	transform(input.begin(), input.end(), input.begin(),
	Caeser(shifts));
	cout << endl<<"Decrypted:\n"<<endl <<endl;

	cout << input << endl;
	system("PAUSE");
	return 0;
}*/