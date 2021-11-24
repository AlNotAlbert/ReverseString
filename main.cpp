#include <iostream>
using namespace std;
void StringReverse(const string &s);
void StringReverseTwo(string &s);
void StringReverseThree(string &s);
int main() {
  string s = "";
  cout << "Enter string: ";
  getline(cin, s);
  StringReverse(s);
  StringReverseTwo(s);
  StringReverseThree(s);
  return 0;
}
void StringReverseThree(string &s) {
  if (!s.empty()) {
	string rs = "";
	for (auto item: s) {
	  rs.append(1, item); // number of times to append char
	}
	cout << rs << endl;
  }
}
void StringReverseTwo(string &s) {
  if (!s.empty()) {
	reverse(s.begin(), s.end());
	cout << s << endl;
  }
}
void StringReverse(const string &s) {
  if (!s.empty()) {
	string rs_2 = "";
	for (int i = s.length() - 1; i >= 0; i--) {
	  rs_2 += s[i];
	}
	cout << rs_2 << endl;
  }
}
