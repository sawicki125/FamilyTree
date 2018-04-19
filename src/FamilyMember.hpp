//
// Created by Michal Sawicki
//

#ifndef FAMILYTREE_FAMILYMEMBER_HPP
#define FAMILYTREE_FAMILYMEMBER_HPP


#include "FamilyMemberRoot.hpp"
#include <string>
#include <vector>
#include <memory>

class FamilyMember : public FamilyMemberRoot
{
public:
    explicit FamilyMember(const std::string &name) : name_(name){}
private:
    std::vector <std::shared_ptr<FamilyMember>> kids;
    bool addKid(std::shared_ptr<FamilyMemberRoot> kid);
    void addSibling(std::shared_ptr<FamilyMember> sibling);

    bool isAlreadyInFamily(std::shared_ptr<FamilyMemberRoot> shared_ptr);
};


#endif //FAMILYTREE_FAMILYMEMBER_HPP
