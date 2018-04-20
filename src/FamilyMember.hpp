//
// Created by Michal Sawicki
//

#ifndef FAMILYTREE_FAMILYMEMBER_HPP
#define FAMILYTREE_FAMILYMEMBER_HPP


#include "IFamilyMember.hpp"
#include "FamilyMemberWKids.hpp"
#include <string>
#include <vector>
#include <memory>

class FamilyMember : public IFamilyMember
{
public:
    FamilyMember(std::shared_ptr<FamilyMember> F);
    FamilyMember() = default;
    bool isAlreadyInFamily();
    bool addKid(std::shared_ptr<FamilyMember> kid);
    std::vector <std::shared_ptr<FamilyMember>> kids;
    std::shared_ptr<FamilyMember> spouse_;
    std::shared_ptr<FamilyMemberWKids> parent_;

};


#endif //FAMILYTREE_FAMILYMEMBER_HPP
