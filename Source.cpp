/*
* �g�@�ӵ{���A�i�H���ƿ�J��ƨé��vector���A��J-1�ɵ�����J�A�Шϥέ��N���̧ǱNvector����������ܥX��
�Ъ`�N�G�C�Ӥ����������j��ӥb�Ϊ��ť�
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