//
// Created by Michal Sawicki
//

#ifndef FAMILYTREE_FAMILYMEMBERROOT_HPP
#define FAMILYTREE_FAMILYMEMBERROOT_HPP

#include <string>
#include <memory>

class IFamilyMember
{
public:
    IFamilyMember() = default;
    virtual bool addSibling() = 0;
    virtual bool isAlreadyInFamily()  = 0;
    std::string name_;
    std::string lastName_;
    int age_;

};


#endif //FAMILYTREE_FAMILYMEMBERROOT_HPP
