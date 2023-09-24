#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec {1, 4, 5};
    list<int> li {0, 0, 0};
    copy(vec.begin(), vec.end(), li.begin());
    for_each(li.begin(), li.end(), [](int item) {
        cout << item << "\t";
    });
    return 0;
}
