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
public:
    FamilyTree(T root) : root_(root){}
private:
    T root_;
};


#endif //FAMILYTREE_FAMILYTREE_HPP
