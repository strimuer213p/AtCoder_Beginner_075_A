/*
問題文
3 つの整数 A,B,C が与えられます。
A,B,C のうち 2 つは 同じ整数であり、残りの 1 つだけ異なる整数です。
例えば、A=5,B=7,C=5 の場合、A,C の 2 つは同じ整数であり、B は 1 つだけ異なる整数です。
3 つの整数のうち、1 つだけ異なる整数を求めてください。
*/

#include<iostream>
#include<vector>
#include<algorithm>

const int num=3;

int main() {
	std::vector<int> v;
	v.resize(num);

	for (auto&& x : v) {
		std::cin >> x;
	}

	for (int i = 0; i < v.size(); i++) {
		if (1 == std::count(v.begin(), v.end(), v[i])) {
			std::cout << v[i] << std::endl;
			break;
		}
	}

	return 0;
}