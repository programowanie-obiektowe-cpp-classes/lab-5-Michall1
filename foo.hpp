#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.reserve(people.size());

    for (auto& p : people) {
        p.birthday();
    }

    for (auto it = people.crbegin(); it != people.crend(); ++it) {
        result.push_back(it->isMonster() ? 'n' : 'y');
    }

    return result;
}
