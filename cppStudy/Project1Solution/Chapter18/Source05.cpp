// 정규 표현식 소개(regular expressions)
#include <iostream>
#include <regex> // c++ 11
using namespace std;

int main()
{
	//regex re("\\d");
	//regex re("[ab]");
	//regex re("[[:digit:]]{3}");
	//regex re("[A-Z]+");
	//regex re("[A-Z]{3}");
	//regex re("[A-Z]{1,5}");
	regex re("([0-9]{1})([-]?)([0-9]{1,4})");

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))
		{
			cout << "Match" << endl;
		}
		else
		{
			cout << "No match" << endl;
		}

		//print matches
		{
			auto begin = std::sregex_iterator(str.begin(), str.end(), re);
			auto end = std::sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				std::smatch match = *itr;
				cout << match.str() << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	return 0;
}