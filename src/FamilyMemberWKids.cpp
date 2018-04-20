//
// Created by Michal Sawicki
//

#include "FamilyMemberWKids.hpp"

FamilyMemberWKids::FamilyMemberWKids(std::shared_ptr<FamilyMemberWKids> F)
{
    age_ = F->age_;
    name_ = F->name_;
    lastName_ = F->lastName_;
    spouse_ = F->spouse_;
    kids = F->kids;
    parent_ = F->parent_;
}

bool FamilyMemberWKids::isAlreadyInFamily(std::shared_ptr<FamilyMember> family)
{
    for( const auto &kid : kids)
    {
        if(family->age_ == kid->age_ && family->name_ == kid->name_ && family->lastName_ == kid->lastName_)
        {
            return true;
        }
    }
    return false;
}

bool FamilyMemberWKids::addKid(std::shared_ptr<FamilyMember> kid)
{
    if(isAlreadyInFamily(kid))
    {
        return false;
    }
    else
    {
        kids.push_back(kid);
        return true;
    }
}

