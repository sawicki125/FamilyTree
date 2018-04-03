//
// Created by michal on 03.04.18.
//

#ifndef FAMILYTREE_FAMILYTREE_HPP
#define FAMILYTREE_FAMILYTREE_HPP


#include <vector>
#include <memory>

template <typename T>
class FamilyTree
{
private:
    std::vector<std::shared_ptr<T>> siblings;
    std::vector<std::shared_ptr<T>> kids;

};


#endif //FAMILYTREE_FAMILYTREE_HPP
