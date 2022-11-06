#include "ItemType.h"

class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull() const;
        int GetLength()const;
        ItemType GetItem(ItemType item, bool& found);
        void PutItem(ItemType item);
        void DeleteItem(ItemType item);
        void ResetList();
        ItemType GetNextItem();
    
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};
