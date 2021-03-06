// Easiest BBST
// 7 min
// https://github.com/kth-competitive-programming/kactl/blob/master/content/data-structures/Treap.h

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

const int MOD = 1000000007;

struct tnode {
    int val, pri;
    tnode *c[2];
    tnode (int v) {
        c[0] = c[1] = NULL;
        pri = rand(); // note that this is < (1<<15) on windows!
        val = v;
    }
    
    void inOrder() {
        cout << "NODE " << val << " PRIORITY: " << pri << "\n";
        if (c[0]) cout << "LEFT: " << c[0]->val << "\n";
        if (c[1]) cout << "RIGHT: " << c[1]->val << "\n";
        cout << "\n";
        if (c[0]) c[0]->inOrder();
        if (c[1]) c[1]->inOrder();
    }
};

pair<tnode*,tnode*> split(tnode* t, int v) { // >= x goes to the right
    if (!t) return {t,t};

    if (v <= t->val) {
        pair<tnode*,tnode*> p = split(t->c[0], v);
        t->c[0] = p.s;
        return {p.f, t};
    } else {
        pair<tnode*,tnode*> p = split(t->c[1], v);
        t->c[1] = p.f; 
        return {t, p.s};
    }
}
    
tnode* merge(tnode* l, tnode* r) {
    if (!l) return r; 
    if (!r) return l;
    if (l->pri > r->pri) {
        l->c[1] = merge(l->c[1],r);
        return l;
    } else {
        r->c[0] = merge(l,r->c[0]);
        return r;
    }
}

tnode* ins(tnode* x, int v) {
    auto a = split(x,v);
    auto b = split(a.s,v+1);
    delete b.f;
    
    tnode* z = new tnode(v);
    return merge(merge(a.f,z),b.s);
}

tnode* del(tnode* x, int v) {
    auto a = split(x,v);
    auto b = split(a.s,v+1);
    delete b.f;
    
    return merge(a.f,b.s);
}

tnode *root, *root1;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    root = ins(root,1);
    root = ins(root,9);
    root = ins(root,3);
    root = ins(root,7);
    root = ins(root,4);
    root = del(root,4);
    
    root->inOrder();
    cout << "--------\n\n";
    root1 = ins(root1,10);
    root = merge(root,root1); 
    root->inOrder();
    cout << "--------\n\n";
    
    auto a = split(root,7);
    a.f->inOrder();
    cout << "--------\n\n";
    a.s->inOrder();
}

// read!
// ll vs. int!
