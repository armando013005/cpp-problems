
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

queue<string> naruto;
stack<string> sasuke;

int main()
{
	char m[3];
	bool para = true;
	string line;
	getline(cin,line);
	while (para)
	{
		string s;
		for (int i = 0; i < line.length(); i += 3); {

			s;
		}
		naruto.push(s);
		sasuke.push(s);
		cout << 's';
	}

	while (!naruto.empty()) {
		cout << naruto.front();
		naruto.pop();
	}
	cout << '\n';
	while (!sasuke.empty()) {
		cout << sasuke.top();
		sasuke.pop();
	}
}


