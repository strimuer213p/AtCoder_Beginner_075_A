/*
��蕶
3 �̐��� A,B,C ���^�����܂��B
A,B,C �̂��� 2 �� ���������ł���A�c��� 1 �����قȂ鐮���ł��B
�Ⴆ�΁AA=5,B=7,C=5 �̏ꍇ�AA,C �� 2 �͓��������ł���AB �� 1 �����قȂ鐮���ł��B
3 �̐����̂����A1 �����قȂ鐮�������߂Ă��������B
*/

#include<iostream>
#include<vector>
#include<algorithm>

const int num=3;

int main() {
	std::vector<int> v;
	v.resize(num);

	for (auto&& x : v) {
		std::cin >> x;    //push_back()��for�����񂵂Ă��ǂ����������̕����Z������
	}

	for (int i = 0; i < v.size(); i++) {
		if (1 == std::count(v.begin(), v.end(), v[i])) {
			std::cout << v[i] << std::endl;
			break;
		}
	}

	return 0;
}