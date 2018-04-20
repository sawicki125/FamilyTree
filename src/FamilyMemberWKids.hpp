//
// Created by Michal Sawicki
//

#ifndef FAMILYTREE_FAMILYMEMBERWKIDS_HPP
#define FAMILYTREE_FAMILYMEMBERWKIDS_HPP


#include "FamilyMember.hpp"

class FamilyMemberWKids : public IFamilyMember
{
public:
    FamilyMemberWKids(std::shared_ptr<FamilyMemberWKids> F);
    FamilyMemberWKids() = default;
    bool isAlreadyInFamily(std::shared_ptr<FamilyMember> family);
    bool addKid(std::shared_ptr<FamilyMember> kid);
    std::vector <std::shared_ptr<FamilyMember>> kids;
    std::shared_ptr<FamilyMember> spouse_;
    std::shared_ptr<FamilyMemberWKids> parent_;
};


#endif //FAMILYTREE_FAMILYMEMBERWKIDS_HPP
