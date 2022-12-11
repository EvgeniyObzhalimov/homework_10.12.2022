#include<iostream>

int divide(int a, int b) {
	int counter{};
	
	for (int i=0; i < b; i++)
	{
		while ((a-b) >=0) 
		{
			a -= b;
			
			counter++;
		}
				
	} 
	
	return counter;
}

int module(int a, int b) {
	int result{};
	int tmp{};
	for (int i = 0; i < b; i++) {
		tmp += divide(a, b);
	}
	result = a - tmp;
	return result;
}
int numDegree(int a, int b) {
	int result{};
	for (int i = 0; i < b; i++) {
		result += a;
	}
	return result;
}
int fact(int a) {
	
	if (a == 1)
	return 1;
	
	return (fact(a - 1) * a)*(-1);
}


int main() {
	setlocale(LC_ALL, "Russian");
	int x{};
	int y{};
	std::cout << "simple dividing" << '\n';
	std::cout << "input number 1: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "input number 2: ";
	std::cin >> y;
	std::cout << "\n";
	std::cout << "number 1 : number 2 = "<<divide(x,y)<<"\n"<<"remain = "<<module(x,y)<<"\n";
	std::cout << "number 1^number 2 = " << numDegree(x, y) << "\n";
	std::cout << "factorial number 1 = " << fact(x) << '\n';







	return 0;


}


