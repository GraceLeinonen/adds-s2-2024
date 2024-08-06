#include <iostream>
#include "Set.h"
#include "VectorSet.h"
using namespace std;

int main() {

    Set<int> *s = new VectorSet<int>();
    s->add(1);
    s->add(2);
    s->add(3);

    cout << s->size() << endl;

    return 0;
}