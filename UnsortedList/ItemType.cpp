#include <fstream>
#include "ItemType.h"

using namespace std;

ItemType::ItemType(){
    value = 0;
}

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
    if (value < otherItem.value) 
        return LESS;
    else if (value > otherItem.value) 
        return GREATER;
    else 
        return EQUAL;
}

void ItemType::Initialize(int number)
{
    value = number;
}

int ItemType::GetValue() const
{
    return value;
}