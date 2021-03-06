# Data Structures

## 2

  * C++ STL
    * Types
      * Set, Multiset, Unordered Set
        * [Set Custom Comparator](https://stackoverflow.com/questions/23042947/how-to-create-a-stdset-with-custom-comparator-in-c)
      * Map, Unordered Map (Hashmap)
        * [Unordered Map Custom Class](https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key)
      * Queue, Deque (Linked List)
      * Priority Queue (Heap)
      * Vector
      * Stack
    * Tutorial
      * CPH (4, Data Structures)
    * Problems (sorted by length)
      * [Beautiful Triplets](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/mancunian-and-beautiful-triplets-30968257/) [](54) 
      * [Polycarp's Phone Book](http://codeforces.com/contest/860/problem/B) [](56)
      * [Jury Marks](http://codeforces.com/contest/831/problem/C) [](67)
      * [Mahmoud & Ehab & Function](http://codeforces.com/contest/862/problem/E) [](74)
      * [Karen & Cards](http://codeforces.com/contest/815/problem/D) [](86) 
  * Cumulative Sum (4/24 silver)
    * 1D, 2D
    * Tutorial
      * CPH (9.1, Static Array Queries) 
    * Problems (sorted by length)
      * [K-Reachability](https://www.hackerearth.com/problem/algorithm/mancunian-and-k-reachability-ad7aca82/) [](51)
      * [Star Sky](http://codeforces.com/contest/835/problem/C) [](54)
      * [Monitor](http://codeforces.com/problemset/problem/846/D) [](60)
## 3

  * Fenwick Tree, aka Binary Indexed Tree (2/24 Gold)
    * Tutorials
      * CPH (9, Range Queries)
      * [Topcoder BIT](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-indexed-trees/)
      * [CSAcademy](https://csacademy.com/lesson/fenwick_trees)
      * [Ordered Set](http://codeforces.com/blog/entry/11080) (similar use to BIT)
    * Problems (sorted by length)
      * [Sorting Steps](https://csacademy.com/contest/round-42/task/sorting-steps/) [](42)
      * [Radio Stations](http://codeforces.com/problemset/problem/762/E) [](53)
      * [PolandBall and Polygon](http://codeforces.com/problemset/problem/755/D) [](65)
      * [Dog Show](http://codeforces.com/contest/847/problem/D) [](70)
      * [Twin Permutations](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/fenwick-binary-indexed-trees/practice-problems/algorithm/mancunian-and-twin-permutations-d988930c/description/) [](80)

## 4

  * Segment Tree (8/24 Plat)
    * Tutorial
      * CPH (9, Range Queries)
      * CPH (28, Segment Trees Revisited)  
      * Also know: 2D range tree (segment tree + BIT)
      * [CSAcademy Tutorial](https://csacademy.com/lesson/segment_trees/)
      * [Codeforces Tutorial](http://codeforces.com/blog/entry/18051)
    * Types
      * 1D
        * (Lazy) Segment Tree
          * Minimum Query + Number of Minimums
        * BIT with range modification
      * 2D
        * Segment Tree + BIT
        * 2D Segment Tree
        * 2D BIT
        * Merge-Sort Tree
    * Problems (sorted by length)
      * [Cards](https://szkopul.edu.pl/problemset/problem/qpsk3ygf8MU7D_1Es0oc_xd8/site/?key=statement) [](81)
      * [Anton & Permutation](http://codeforces.com/contest/785/problem/E) [](85)
      * [Antiquity](http://codeforces.com/contest/869/problem/E) [](87)
      * [Crowded Cities](https://dmoj.ca/problem/bfs17p6) [](89)
      * [Candles](https://csacademy.com/contest/round-41/task/candles/) [](94)
      * [Nervous Barriers](http://codeforces.com/contest/781/problem/E) [](99)
  * Matrices
    * Tutorial
      * CPH (23, Matrices)
      * Exponentiation
      * Gaussian Elimination?
      * [Implementation](https://github.com/kth-competitive-programming/kactl/blob/master/content/data-structures/Matrix.h)
    * Problem(s)
      * [Wet Shark & Blocks](http://codeforces.com/problemset/problem/621/E) [](55)
      * [CF 420 Div 2 E](http://codeforces.com/contest/821/problem/E) [](81)
      * [Currencies](https://www.hackerrank.com/contests/gs-codesprint/challenges/currencies) [](107)
      
## 5

  * Persistent Segment Tree 
    * Tutorial
      * [Anudeep2011](https://blog.anudeep2011.com/persistent-segment-trees-explained-with-spoj-problems/)
      * [oml1111](https://drive.google.com/file/d/0BwGLW04WRv0ITEZjRWlMSFc2bk0/view)
    * Problems
      * [Army Creation](http://codeforces.com/contest/813/problem/E)
      * [COT](http://www.spoj.com/problems/COT/)
      * [Functions on the Segments](http://codeforces.com/contest/837/problem/G)
      * [Till I Collapse](http://codeforces.com/contest/786/problem/C)
    * Variant(s)
      * [Lazy Propogation](http://codeforces.com/blog/entry/47108?#comment-315047)
  * Balanced Binary Search Trees
    * Types
      * Splay Tree
        * [Splay Tree Implementation](http://codeforces.com/blog/entry/18462)
        * [Link-Cut Tree](http://courses.csail.mit.edu/6.851/spring12/scribe/L19.pdf)
        * Problems
          * [DYNACON1](http://www.spoj.com/problems/DYNACON1/) [](140)
          * [Tree Rotations 2](https://szkopul.edu.pl/problemset/problem/b0BM0al2crQBt6zovEtJfOc6/site/?key=statement) [](193)
      * Treap
        * [Wikipedia](https://en.wikipedia.org/wiki/Treap)
        * Split, Merge, Lazy Propogation
        * Problems
          * [Hitchhiking](http://codeforces.com/contest/809/problem/D) [](132)
          * [Yet Another Array Queries Problem](http://codeforces.com/contest/863/problem/D) [](153)
            * Due to the low value of m, a BBST is not required.
          * [TREAP](http://www.spoj.com/problems/TREAP/) [](173)
          * [Points & Distances](https://www.hackerearth.com/problem/algorithm/septembereasy-points-and-distances-d30d0e6b/description/) [](185)
          * [TEMPLEQ](http://www.spoj.com/problems/TEMPLEQ/) [](213)
  * [2D BIT with Range Update + Query](https://arxiv.org/pdf/1311.6093v4.pdf)

## Other
  * [Wavelet Tree](http://codeforces.com/blog/entry/52854)
