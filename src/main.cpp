#include <iostream>
#include "FamilyTree.hpp"
#include "FamilyMember.hpp"

int main()
{
    FamilyMember M("Tomek");
    FamilyTree<FamilyMember> T(M);
    return 0;
}