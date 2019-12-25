#include <bits/stdc++.h>

#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define mp make_pair
using namespace std;

typedef long long int64;

class BAAndB {
public:
    void solve(std::istream &in, std::ostream &out) {
        int64 a, b;
        in >> a >> b;
        if (a > b)swap(a, b);

        int64 ans = 1LL << 50;
        int64 sum = a + b;
        for (int i = 0; i < (1 << 20); ++i) {
            int64 tmp = (i + 1) * i / 2;
            int64 total = a + b + tmp;
            if (total % 2 == 0 && tmp >= b - a) {
                ans = i;
                break;
            }
        }
        out << ans << '\n';
    }
};
