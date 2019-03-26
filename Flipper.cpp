#include <fstream>
#include <string>
#include <sstream> 
#include <cstdlib>
#include <iostream>
using namespace std;
bool T = false;
string v;
string p;
void Text()
{
	ifstream t("Flipper.cpp");
	stringstream stringBuffer;
	stringBuffer << t.rdbuf();
	p = stringBuffer.str();
	t.close();
	for (int i = 0; i < p.length(); i++)
	{
		if(p[i] == 'i' && p[i+1] == 'n' && p[i+2] == 'p' && p[i+3] == 'u' && p[i + 4] == 't')
		{
			p[i] = 'o';
			p[i+1] = 'u';
			p[i+2] = 't';
			p[i+3] = 'p';
			p[i+4] = 'u';
			p[i+5] = 't';
			
		}
		else if (p[i] == 'o' && p[i + 1] == 'u' && p[i + 2] == 't' && p[i + 3] == 'p' && p[i + 4] == 'u' && p[i + 5] == 't')
		{
			p[i] = 'i';
			p[i + 1] = 'n';
			p[i + 2] = 'p';
			p[i + 3] = 'u';
			p[i + 4] = 't';
		}
	}
	ofstream o("Flipper.cpp");
	o << p;
	o.close();
	system("g++ Flipper.cpp");
}
int main()
{
	if (T)
	{
		v = "Hello World!";
	}
	else {
		v = "Goodbye World!";
	}
	cout << v;
	Text();
	cin >> v;
}
