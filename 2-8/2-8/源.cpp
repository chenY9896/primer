//请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其先输出2，然后输出制表符，再输出M，最后转到新一行。
#include <iostream>
using namespace std;
int main() {
	cout << 2 << '\115' << '\n';
	cout << 2 << '\t' << '\115';
	system("pause");
	return 0;
}