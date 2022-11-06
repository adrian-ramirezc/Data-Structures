#include <fstream>

const int MAX_ITEMS = 5;
enum RelationType { LESS, GREATER, EQUAL};

class ItemType
{
    public:
        ItemType();
        RelationType ComparedTo(ItemType) const;
        int GetValue() const;
        void Initialize(int number);
    private:
        int value;
};