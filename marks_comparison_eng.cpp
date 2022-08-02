#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

void result(int& a, int& b){
	if(a > b){
		cout << "პირველი აბიტურიენტების ქულები მეტია შერჩეული ფაკულტეტისთვის\n";
	} else if(a < b){
		cout << "მეორე აბიტურიენტების ქულები მეტია შერჩეული ფაკულტეტისთვის\n";
	} else {
		cout << "ორივე აბიტურიენტს თანაბრი ქულები აქვს შერჩეული ფაკულტეტისთვის\n";
	}
}

int main(int argc, char** argv){
	int faculty,u1_m, u1_q, u1_e, u2_m, u2_q, u2_e, u1_sum, u2_sum;
	
	cout << "FREEUNI CS / KIU CS / KIU მათემატიკა - 1\n";      // 8      3       1
	cout << "FREEUNI ფიზიკა - 2\n";                            // 7      4       1
	cout << "FREEUNI ელექტრო და კომპიუტერული ინჟინერია - 3\n"; // 7      2       3
	cout << "KIU MANAGEMENT - 4\n";                            // 6      3       3
	cout << "FREEUNI შენობის სისტემების ინჟინერია - 5\n";      // 5      5       2
	cout << "FREEUNI არქიტექტურა - 6\n";                       // 3      6       3
	cout << "FREEUNI სამართალი - 7\n";                         // 2      6       4 
	cout << "FREEUNI ბიზნეს ადმინისტრირება / მართვა - 8\n";    // 3      5       4
	cout << "FREEUNI საერთაშორისო ურთიერთობები - 9\n";         // 1      6       5
	cout << "აირჩიეთ ფაკულტეტის ნომერი -> ";
	cin >> faculty;

	cout << "პირველი აბიტურიენტის მათემატიკის ქულა: ";
	cin >> u1_m;
	cout << "პირველი აბიტურიენტის ქართულის ქულა: ";
	cin >> u1_q;
	cout << "პირველი აბიტურიენტის ინგლისურის ქულა: ";
	cin >> u1_e;

	cout << "მეორე აბიტურიენტის მათემატიკის ქულა: ";
	cin >> u2_m;
	cout << "მეორე აბიტურიენტის ქართულის ქულა: ";
	cin >> u2_q;
	cout << "მეორე აბიტურიენტის ინგლისურის ქულა: ";
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
			cout << "თქვენ არ აგირჩევიათ შესაბამისი ნომერი\n";
	}


	return 0;
}
