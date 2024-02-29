#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
ll ans;

bool IsTri(ll a, ll b, ll c) {
  if (c <= 0) {
    return false;
  }

  if (a + b <= c) {
    return false;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  ans = 0;
  for (auto i = 1; i < n; ++i) {
    for (auto j = i; j < n; ++j) {
      const auto& k = n - i - j;
      if (k < j) {
        continue;
      }

      if (IsTri(i, j, k)) {
        ++ans;
      }
    }
  }

  cout << ans;

  return 0;
}