#include <iostream>
#include "SkipList.h"

using namespace std;

int main() {

    cout << "skiplist test now starts..." << endl;

    //给一个最大的整型值
    const char *root = "root";
    SkipList<string, string> skipList(root);

    cout << sizeof(skipList) << endl;

    int length = 10;

    for (int i = 1; i <= length; ++i) {
        string k = "key" + to_string(i) ;
        string value = "value" + to_string(i);
        skipList.insert(k, value);
    }

    cout << sizeof(skipList) << endl;
    return 0;
}