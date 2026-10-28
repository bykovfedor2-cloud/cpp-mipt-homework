#include <stdio.h>
#include "dynarray.h"

int main() {
    Dynarray a;
    init(&a, 0);
    for (size_t i = 0; i < 10; ++i) push_back(&a, i);
    print(&a);

    printf("--- 1.1 pop_back ---\n");
    printf("Extracted: %d\n", pop_back(&a));
    print(&a);

    printf("--- 1.2 resize ---\n");
    resize(&a, 12);
    print(&a); // 0..8, 0, 0

    printf("--- 1.3 shrink_to_fit ---\n");
    shrink_to_fit(&a);
    printf("Size: %zu, Capacity: %zu\n", a.size, a.capacity);

    printf("--- 1.4 shallow_copy ---\n");
    Dynarray sh = shallow_copy(&a);
    set(&a, 0, 999);
    print(&a);
    print(&sh);

    printf("--- 1.5 deep_copy ---\n");
    Dynarray dp = deep_copy(&a);
    set(&a, 0, 777);
    print(&a);
    print(&dp);

    destroy(&a);
    destroy(&dp);
  
    return 0;
}
