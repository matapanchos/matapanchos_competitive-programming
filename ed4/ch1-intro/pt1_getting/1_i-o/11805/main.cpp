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

int main(int argc, char const *argv[])
{
	int t_testCases = 0;
	int n_players = 0, k_player = 0, p_passes = 0;
	int last_player = 0;
	cin >> t_testCases;
	for (int testCase = 1; testCase <= t_testCases; testCase++)
	{
		cin >> n_players >> k_player >> p_passes;
		last_player = (k_player + p_passes) % n_players;
		// If module is 0 last_player is the last player in team, does't change value otherwise.
		last_player = last_player != 0 ? last_player : n_players;
		cout << "Case " << testCase << ": " << last_player << endl;
	}
	return 0;
}
