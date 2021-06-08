/*
* 寫一個程式，可以重複輸入整數並放到vector中，輸入-1時結束輸入，請使用迭代器依序將vector中的元素顯示出來
請注意：每個元素之間間隔兩個半形的空白
*/


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