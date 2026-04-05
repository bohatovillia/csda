#include <cassert>
#include "math_operations.h"

// Unit tests for the add function
void test_add() {
    assert(add(1, 2) == 3);
    assert(add(-1, -1) == -2);
    assert(add(0, 0) == 0);
    assert(add(-1, 1) == 0);
    assert(add(100, 200) == 300);
}

int main() {
    test_add();
    return 0;
}