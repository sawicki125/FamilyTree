//
// Created by Michal Sawicki
//

#include "FamilyMember.hpp"

bool FamilyMember::addKid(std::shared_ptr<FamilyMemberRoot> kid)
{
    if(kids.empty())
    {
        kids.emplace_back(kid);
    }
    else if (isAlreadyInFamily(kid))
    {
        return false;
    }
    else
    {
        kids.emplace_back(kid);
    }

    return false;
}

bool FamilyMember::isAlreadyInFamily(std::shared_ptr<FamilyMemberRoot> kidToCheck)
{
    for (auto const &kid : kids)
    {
        if(kid == kidToCheck)
            return true;
    }
    return false;
}
