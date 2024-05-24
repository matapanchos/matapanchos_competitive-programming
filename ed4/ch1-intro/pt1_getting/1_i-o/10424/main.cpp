// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1365

/*********************************DOCUMENTACIÓN*********************************

Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor

Complejidad de tiempo = O(*) con * <= ?
Complejidad de espacio = O(*) con * <= ?

*******************************************************************************/

// limits
// ull 18 446 744 073 709 551 615 [18.10^18]
// ll 9 223 372 036 854 775 807 [-2^63 - 2^63-1] [9.10^18]
// int 2 147 483 647 [-2^31 - 2^31-1] [2.10^9]

#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); i--)
#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;

int sum_digits(int number)
{
	int sum = 0;
	for (; number != 0; sum += number % 10, number /= 10)
		;
	return sum;
}

int love_number(string name)
{
	int name_number = 0;
	for (auto name_character : name)
	{
		if (isalpha(name_character))
		{
			if (isupper(name_character))
			{
				name_number += name_character - 'A' + 1;
			}
			else if (islower(name_character))
			{
				name_number += name_character - 'a' + 1;
			}
		}
	}
	return name_number;
}

double love_calculator(string name1, string name2)
{
	double ratio_love = 0;
	int name1_number = 0, name2_number = 0;
	name1_number = love_number(name1);
	name2_number = love_number(name2);
	while (name1_number >= 10)
	{
		name1_number = sum_digits(name1_number);
	}
	while (name2_number >= 10)
	{
		name2_number = sum_digits(name2_number);
	}
	ratio_love = name1_number < name2_number ? (double)name1_number / (double)name2_number : (double)name2_number / (double)name1_number;
	return ratio_love;
}

int main(int argc, char const *argv[])
{
	string name1 = "", name2 = "";
	double ratio_love = 0;
	while (getline(cin, name1))
	{
		getline(cin, name2);
		ratio_love = love_calculator(name1, name2);
		cout << fixed << setprecision(2);
		cout << (ratio_love) * 100 << " %" << endl;
	}
	return 0;
}
