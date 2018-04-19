//
// Created by Michal Sawicki
//

#ifndef FAMILYTREE_FAMILYMEMBERROOT_HPP
#define FAMILYTREE_FAMILYMEMBERROOT_HPP

#include <string>
#include <memory>

class FamilyMemberRoot
{
public:
    void addSpouse (const std::shared_ptr<FamilyMemberRoot> &spouse)
    {
        *spouse_ = *spouse;
    }

    std::string name_;
    std::string lastName_;
    int age_;
    std::shared_ptr<FamilyMemberRoot> spouse_;

};


#endif //FAMILYTREE_FAMILYMEMBERROOT_HPP
