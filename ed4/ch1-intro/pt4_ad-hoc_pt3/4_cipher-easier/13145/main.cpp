// www.paginaPregunta.com

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

string cesar_shifter(string text, int shift_n)
{
	int alph_n = 26;
	int bias_upper = int('A');
	int bias_lower = int('a');
	string text_shifted = "";
	char letter_decode;
	// Standarize shift as positive
	shift_n = shift_n % 26 + 26;
	for (auto letter : text)
	{
		if (isalpha(letter))
		{
			if (isupper(letter))
			{
				letter_decode = char(int(letter + shift_n - bias_upper) % alph_n + bias_upper);
			}
			else
			{
				letter_decode = char(int(letter + shift_n - bias_lower) % alph_n + bias_lower);
			}
		}
		else
		{
			letter_decode = letter;
		}
		text_shifted += letter_decode;
	}
	return text_shifted;
}

void solve()
{
	int shift_n;
	string text;
	string text_shifted;
	cin >> shift_n;
	while (shift_n != 0)
	{
		cin.ignore();
		getline(cin, text);
		text_shifted = cesar_shifter(text, shift_n);
		cout << text_shifted << endl;
		cin >> shift_n;
	}
}

int main(int argc, char const *argv[])
{
	solve();
	return 0;
}
