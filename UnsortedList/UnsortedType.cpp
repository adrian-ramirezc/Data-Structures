#include "UnsortedType.h"

using namespace std;

UnsortedType::UnsortedType()
{
    length = 0;
}

bool UnsortedType::IsFull() const
{
    return (length == MAX_ITEMS);
}

int UnsortedType::GetLength() const
{
    return length;
}

ItemType UnsortedType::GetItem(ItemType item, bool& found)
{
    bool moreToSearch;
    int location = 0;
    found = false;

    moreToSearch = (location < length);

    while (moreToSearch && !found)
    {
        switch (item.ComparedTo(info[location]))
        {
            case LESS       :
            case GREATER    :   location++;
                                moreToSearch = (location < length);
                                break;
            case EQUAL      :   found = true;
                                item = info[location];
                                break;
        }
    }

    return item;
}

void UnsortedType::PutItem(ItemType item)
{
    info[length] = item;
    length++;
}

void UnsortedType::DeleteItem(ItemType item)
{
    int location = 0;
    while (item.ComparedTo(info[location]) != EQUAL)
    {
        location++;
    }
    info[location] = info[length - 1];
    length--;
}

void UnsortedType::MakeEmpty()
{
    length = 0;
}

void UnsortedType::ResetList()
{
    currentPos = -1;
}

ItemType UnsortedType::GetNextItem()
{
    currentPos++;
    return info[currentPos];
}