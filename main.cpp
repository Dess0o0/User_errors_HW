#include<iostream>
#include<string>


void IntAskVar(const std::string& prompt, int& var)
{
	std::cout << prompt;
	std::cin >> var;
	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(32000, '\n');
		std::cout << prompt;
		std::cin >> var;
	}
}

void DoubleAskVar(const std::string& prompt, double& var) 
{
	std::cout << prompt;
	std::cin >> var;
	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(32000, '\n');
		std::cout << prompt;
		std::cin >> var;
	}
}

void BoolAskVar(const std::string& prompt, bool& var) 
{
	std::cout << prompt;
	std::cin >> var;
	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(32000, '\n');
		std::cout << prompt;
		std::cin >> var;
	}

}

int main()
{
	int intArr[5]{};
	double doubleArr[5]{};
	bool boolArr[5]{};
	std::string message{ "Enter five numbers of array\n" };
	int intUserNum;
	double doubleUserNum;
	bool boolUserNum;
	for (int i = 0; i < std::size(intArr); i++)
	{
		IntAskVar(message, intUserNum);
		intArr[i] = intUserNum;
	}
	
	for (int i = 0; i < std::size(doubleArr); i++)
	{
		DoubleAskVar(message, doubleUserNum);
		doubleArr[i] = doubleUserNum;
	}
	
	for (int i = 0; i < std::size(boolArr); i++)
	{
		BoolAskVar(message, boolUserNum);
		boolArr[i] = boolUserNum;
	}
	


	std::cout << '\n';
	for (int i = 0; i < std::size(intArr); i++)
	{
		std::cout << intArr[i] << ' ';
	}
	std::cout << "\n\n";
	for (int i = 0; i < std::size(doubleArr); i++)
	{
		std::cout << doubleArr[i] << ' ';
	}
	std::cout << "\n\n";
	for (int i = 0; i < std::size(boolArr); i++)
	{
		std::cout << boolArr[i] << ' ';
	}
	
	return 0;
}