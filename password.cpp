#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(NULL));

	int passLength, letters, upper, upperNum, lower, lowerNum,
		num, manyNum, createAgain;
	bool again;
	string password;

	do {
		cout << "What is the length of the password? ";
		cin >> passLength;

		cout << "Do you want letters (0-no, 1-yes)? ";
		cin >> letters;

		if(letters == 1) {
			cout << "Do you want uppercase letters (0-no, 1-yes)? ";
			cin >> upper;
			if(upper == 1) {
				cout << "How many characters should be uppercase? ";
				cin >> upperNum;
				for(int i = 0; i < upperNum; i++) {
					password += (char) (rand() % 26 + 65);
				}
			}			
			cout << "Do you want lowercase letters (0-no, 1-yes)? ";
			cin >> lower;
			if(lower == 1) {
				cout << "How many character should be lowercase? ";
				cin >> lowerNum;
				for(int i = 0; i < lowerNum; i++) {
					password += (char) (rand() % 26 + 97);
				}
			}
		}
		
		cout << "Do you want numbers (0-no, 1-yes)? ";
		cin >> num;

		if(num == 1) {
			cout << "How many characters should be numbers? ";
			cin >> manyNum;
			for(int i = 0; i < manyNum; i++) {
				password += (char) (rand() % 10 + 48);
			}
		}

		cout << "Your random password is: " << password << endl;

		cout << "Do you want to create another password (0-no, 1-yes)? ";
		cin >> createAgain;

		if(createAgain == 1) {
			again = true;
		}else {
			again = false;		
		}
	} while(again);

	return 0;

}	
