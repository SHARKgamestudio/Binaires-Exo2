#include "Perms.h"
#include <iostream>

int main() {
    Perms perms = Perms();
    perms.Add(PERMISSION_WRITE);
    perms.Remove(PERMISSION_READ);

    std::cout << perms.HasPerm(PERMISSION_WRITE);
}