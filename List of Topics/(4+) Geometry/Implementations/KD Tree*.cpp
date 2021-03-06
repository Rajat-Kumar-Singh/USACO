// https://github.com/kth-competitive-programming/kactl/blob/master/content/geometry/kdTree.h
// supports nearest neighbor query in O(log n)

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

const int MOD = 1000000007;

int t = 0, cur = 0;

struct point {
    ll d[2];    
    point(ll x, ll y) {
        d[0] = x, d[1] = y;   
    }
    point() {
        d[0] = 0, d[1] = 0;
    }
};

ll distance(point a, point b) {
    ll d = 0;
    F0R(i,2) d += (a.d[i]-b.d[i])*(a.d[i]-b.d[i]);
    return d;
}

bool comp(point a, point b) {
    return a.d[cur] < b.d[cur];    
}

struct node {
    point* pt = NULL;
    point lo, hi;
    node* c[2];
    int ax = 0;
    
    ll dist(point p) {
        ll d = 0;
        F0R(i,2) {
            if (p.d[i] < lo.d[i]) d += (p.d[i]-lo.d[i])*(p.d[i]-lo.d[i]);
            else if (p.d[i] > hi.d[i]) d += (p.d[i]-hi.d[i])*(p.d[i]-hi.d[i]);
        }
        return d;
    }
    
    node(int axis, point low, point high, vector<point> p) {
        lo = low, hi = high, ax = axis;
        if (p.size() > 1) {
            cur = ax;
            sort(p.begin(),p.end(),comp);
            
            int M = p.size()/2;
            while(M > 0 && p[M].d[ax] == p[M-1].d[ax]) M--;
            
            point lo1 = lo; lo1.d[ax] = p[M].d[ax];
            point hi1 = hi; hi1.d[ax] = p[M].d[ax]-1;
            
            if (M) c[0] = new node((ax+1)%2,lo,hi1,{p.begin(),p.begin()+M});
            c[1] = new node((ax+1)%2,lo1,hi,{p.begin()+M,p.end()});
        } else if (p.size() == 1) {
            pt = new point(p[0]);
        }
    }
    
    point get(point p) {
        if (pt) return *pt;
        if (!c[0]) return c[1]->get(p);
        
        int t = c[0]->dist(p) < c[1]->dist(p) ? 0 : 1;
        point z = c[t]->get(p);
        if (distance(p,z) <= c[t^1]->dist(p)) return z;
        
        point z1 = c[t^1]->get(p);
        if (distance(p,z) < distance(p,z1)) return z;
        return z1;
    }
};

node* root;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	vector<point> x; 
	F0R(i,100000) x.pb(point(rand() % 1000000000, rand() % 1000000000));
	
	root = new node(0,point(-MOD,-MOD),point(MOD,MOD),x);
	F0R(i,100000) {
	    point y(rand() % 1000000000, rand() % 1000000000);
	    cout << y.d[0] << " " << y.d[1] << " " << root->get(y).d[0] << " " << root->get(y).d[1] << "\n";
	}
}

// read!
// ll vs. int!