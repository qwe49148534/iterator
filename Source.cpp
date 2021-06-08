#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> a;
	vector<int>::iterator it;
	int num;
	int b;
	do {
		cin >> num;
		a.push_back(num);
	} while ( num != -1 );
	a.pop_back();
	for (it = a.begin(); it != a.end(); it++) {
		cout << *it << "  ";
	}
}