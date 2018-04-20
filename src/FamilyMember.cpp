//
// Created by Michal Sawicki
//

#include "FamilyMember.hpp"



bool FamilyMember::addKid(std::shared_ptr<FamilyMember> kid)
{
    if(kids.empty())
    {
    }
//    else if (isAlreadyInFamily(*kid))
//    {
//        return false;
//    }
    else
    {
        kids.emplace_back(kid);
    }

    return false;
}
//
//bool FamilyMember::isAlreadyInFamily( )
//{
//    return false;
//}