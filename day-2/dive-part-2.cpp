#include <iostream>
#include <string>

using namespace std;

int main() {

	int depth = 0, horizontal = 0, aim = 0;
	std::string command;
	int n;

	while (cin >> command >> n)
	{
   		if(command.compare("forward") == 0){
			horizontal += n;
			depth += aim * n;
		}
		else if (command.compare("up") == 0)
			aim -= n;
		else if (command.compare("down") == 0)
			aim += n;
	}

	cout << horizontal * depth << endl;

}
