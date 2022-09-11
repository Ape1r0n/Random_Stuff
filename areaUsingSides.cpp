#include <iostream>
#include <cmath>

int main(){
    double a, b, c, d, p, alpha, beta;
    char choice;

    std::cout << "Enter Q - to calculate area of any quadrilateral using four sides and two opposite angles or T - for area of the triangle usinf three sides: ";
    std::cin>> choice;

    if(choice == 'Q' || choice == 'q'){
        std::cout << "Enter the first side length: ";
        std::cin >> a;
        std::cout << "Enter the second side length: ";
        std::cin >> b;
        std::cout << "Enter the third side length: ";
        std::cin >> c;
        std::cout << "Enter the fourth side length: ";
        std::cin >> d;
        std::cout << "Enter the angle in degrees between the first and the fourth sides: ";
        std::cin >> alpha;
        std::cout << "Enter the angle in degrees between the second and the third sides: ";
        std::cin >> beta;

        p = (a+b+c+d)/2;
        std::cout << std::sqrt((p-a)*(p-b)*(p-c)*(p-d)-(0.5)*a*b*c*d*(cos((alpha + beta)))) << std::endl;
    } else if(choice == 'T' || choice == 't'){
        std::cout << "Enter the first side length: ";
        std::cin >> a;
        std::cout << "Enter the second side length: ";
        std::cin >> b;
        std::cout << "Enter the third side length: ";
        std::cin >> c;

        std::cout << (std::sqrt(4*a*a*b*b - std::pow((a*a + b*b - c*c),2)))/4 << std::endl;
    }
	return 0;
}
