#include <iostream>
#include "array.h"
using namespace std;
int main() {

    /**
     * java中new返回对象引用(别名)，而c++中返回的是对象的实际地址(指针)
     */
    cout << "hello world" << endl;
    array *arr  = new array(20);
    cout << *dec << arr->getCapacity() << endl;
    for (int i = 0; i < 10; ++i) {
        arr->addLast(i);
    }
    arr->printArray();
    arr->addFirst(-1);
    arr->printArray();
    arr->remove(2);
    arr->printArray();
    arr->removeElement(5);
    arr->printArray();
    arr->removeFirst();
    arr->printArray();
    arr->removeLast();
    arr->printArray();

    return 0;
}
