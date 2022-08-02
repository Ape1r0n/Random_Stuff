#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

void result(int& a, int& b){
	if(a > b){
		cout << "First student has better scores for selected major\n";
	} else if(a < b){
		cout << "Second student has better scores for selected major\n";
	} else {
		cout << "Both students did equally great for selected major\n";
	}
}

int main(int argc, char** argv){
	int faculty, u1_m, u1_q, u1_e, u2_m, u2_q, u2_e, u1_sum, u2_sum;
	
	cout << "FREEUNI CS / KIU CS / KIU Math - 1\n";              
	cout << "FREEUNI Physics- 2\n";                            
	cout << "FREEUNI Electrical and Computer Engineering - 3\n"; 
	cout << "KIU Management - 4\n";              
	cout << "FREEUNI Building Engineering - 5\n"; 
	cout << "FREEUNI Architecture- 6\n";
	cout << "FREEUNI Law - 7\n";                        
	cout << "FREEUNI Business Administration / FREEUNI Social Sciences - 8\n";    
	cout << "FREEUNI International Relations - 9\n";           
	cout << "Select major number -> ";
	cin >> faculty;

	cout << "First student's score in Math: ";
	cin >> u1_m;
	cout << "First student's score in Georgian: ";
	cin >> u1_q;
	cout << "First student's score in English: ";
	cin >> u1_e;

	cout << "Second student's score in Math: ";
	cin >> u2_m;
	cout << "Second student's score in Georgian: ";
	cin >> u2_q;
	cout << "Second student's score in English: ";
	cin >> u2_e;

	switch(faculty){
		case 1:
			u1_sum = 8*u1_m + 3*u1_e + 1*u1_q;
			u2_sum = 8*u2_m + 3*u2_e + 1*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 2:
			u1_sum = 7*u1_m + 4*u1_e + 1*u1_q;
			u2_sum = 7*u2_m + 4*u2_e + 1*u2_q;
			result(u1_sum,u2_sum);	
			break;
		case 3:
			u1_sum = 7*u1_m + 2*u1_e + 3*u1_q;
			u2_sum = 7*u2_m + 2*u2_e + 3*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 4:
			u1_sum = 6*u1_m + 3*u1_e + 3*u1_q;
			u2_sum = 6*u2_m + 3*u2_e + 3*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 5:
			u1_sum = 5*u1_m + 5*u1_e + 2*u1_q;
			u2_sum = 5*u2_m + 5*u2_e + 2*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 6:
			u1_sum = 3*u1_m + 6*u1_e + 3*u1_q;
			u2_sum = 3*u2_m + 6*u2_e + 3*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 7:
			u1_sum = 2*u1_m + 6*u1_e + 4*u1_q;
			u2_sum = 2*u2_m + 6*u2_e + 4*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 8:
			u1_sum = 3*u1_m + 5*u1_e + 4*u1_q;
			u2_sum = 3*u2_m + 5*u2_e + 4*u2_q;
			result(u1_sum,u2_sum);
			break;
		case 9:
			u1_sum = 1*u1_m + 6*u1_e + 5*u1_q;
			u2_sum = 1*u2_m + 6*u2_e + 5*u2_q;
			result(u1_sum,u2_sum);
			break;
		default:
			cout << "You did not supply correct major number\n";
	}

	return 0;
}