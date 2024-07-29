// fold expression make it easier to work with parameter packs in variadic templates
// helps to apply binary operator to all elements
/* types
on sum(1, 2, 3, 4, 5)
Unary right fold `args+...` --  (((1 + 2) + 3) + 4) + 5.
Unary left fold `... + args` -- 1 + (2 + (3 + (4 + 5))).
Binary right fold ` args+ ... + init` -- init = 0 --(((1 + 2) + 3) + 4) + 5 + 0.
Binary left fold `init + ... +args ` -- 0 + (1 + (2 + (3 + (4 + 5)))).
*/
// gpt example
#include <iostream>

template <typename... Args>
auto productLeftFold(Args... args)
{
    return (10 * ... * args); // Binary left fold with init value 10
}

int main()
{
    std::cout << productLeftFold(1, 2, 3, 4, 5) << std::endl; // Output: 1200
    return 0;
}
