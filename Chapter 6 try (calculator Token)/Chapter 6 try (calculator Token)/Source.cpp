#include "..\..\std_lib_facilities.h"
class Token {
public:
	char kind;
	double value;
};
Token get_token();
vector<Token> tok;

int main()
{
	while (cin) {
		Token t = get_token();
		tok.push_back(t);
	}
	double d = 0;
	for (int i = 0; i < tok.size(); ++i) {
		if (tok[i].kind == '*') {
			d = tok[i - 1].value * tok[i + 1].value;
		}
	}
	cout << d << '\n';
}