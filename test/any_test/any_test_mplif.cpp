// Copyright Antony Polukhin, 2017.
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// This tests the issue from https://svn.boost.org/trac/boost/ticket/12052

#include <iostream>
#include <engine/common/any.h>

int main() {
    engine::any a = 1;
    std::cout << engine::any_cast<int>(a) << '\n';
    a = 3.14;
    std::cout << engine::any_cast<double>(a) << '\n';
    a = true;
    std::cout << std::boolalpha << engine::any_cast<bool>(a) << '\n';
}
