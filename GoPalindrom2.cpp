
#include <iostream>
#include<string>

bool GameOfPalindrom(const std::string& Key) {
	
	int odd = 0;
	const int alfabet = 26;
	int a = 'a';
	bool pali;
	int alfabetArray[alfabet] = {};

	for (int i = 0; i < Key.length(); i++)
	{
		alfabetArray[int(Key[i]) - a]++;
	}
	for (int i = 0; i < alfabet; i++)
	{
		
		odd += alfabetArray[i] % 2;
		if (odd==0||odd==1)
			pali = true;
		else
			pali = false;
	}
	 return pali;
}

int main()
{
    std::string stringy;
	std::cout << "Extract a string/key from the box: ";
	std::cin >> stringy;
	if (GameOfPalindrom(stringy)==true)
		std::cout << "Yes";
	else
		std::cout << "No";
}

