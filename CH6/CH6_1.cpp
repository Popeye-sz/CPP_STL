#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    // case1
    vector<int> vec {1, 4, 5};
    list<int> li {0, 0, 0};
    copy(vec.begin(), vec.end(), li.begin());
    for_each(li.begin(), li.end(), [](int item) {
        cout << item << "\t";
    });
    cout << endl;

    // case2
    list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> coll2;
    coll2.resize(coll1.size());
    copy(coll1.begin(), coll1.end(), coll2.begin());
    for_each(coll2.begin(), coll2.end(), [](int item) {
        cout << item << "\t";
    });
    cout << endl;

    // case3
    deque<int> coll3(coll1.size());
    copy(coll1.begin(), coll1.end(), coll3.begin());
    reverse(coll3.begin(), coll3.end());
    for_each(coll3.begin(), coll3.end(), [](int item) {
        cout << item << "\t";
    });
    cout << endl;

    return 0;
}
