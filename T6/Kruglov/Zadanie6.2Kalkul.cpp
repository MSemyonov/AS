#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>

using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	int sum = 0, num = 0;
	double m = 0;
	string s;
	stack <int> st;
	stack <double> st1;
	cout <<"Vvodite" <<endl;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*') {
			while (s[i] != ' ' && i < s.size()) {
				num = num * 10 + static_cast <int> (s[i]) - 48;
				i++;
				st.push(num);
			}
			if (!st.empty()) {
				m = st.top();
				st1.push(m);
				num = 0;
				m = st.size();
				for (int j = 0; j < m; j++) {
					st.pop();
				}
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////
		switch (s[i]) {
		case '+': m = st1.top(); st1.pop(); m += st1.top(); st1.pop(); st1.push(m); break;

		case '-': m = st1.top(); st1.pop(); m = st1.top() - m; st1.pop(); st1.push(m); break;

		case '/': m = st1.top(); st1.pop(); m = st1.top() / m; st1.pop(); st1.push(m); break;

		case '*': m = st1.top(); st1.pop(); m *= st1.top(); st1.pop(); st1.push(m); break;


		default: break;
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////
	}
	
	cout <<"Rezult ----"<< st1.top();
	cin >> num;
	return 0;

}