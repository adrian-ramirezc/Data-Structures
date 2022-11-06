#include <iostream>
#include "UnsortedType.h"
#include <assert.h>

using namespace std;

void print_length(int length)
{
    cout << "List has " << length << " elements" << endl;
}

int main()
{   
    ItemType first_element;
    ItemType second_element;
    ItemType third_element;
    ItemType fourth_element;
    ItemType fifth_element;
    ItemType element;
    UnsortedType unsorted_list;
    int current_length;

    first_element.Initialize(5);
    second_element.Initialize(4);
    third_element.Initialize(3);
    fourth_element.Initialize(2);
    fifth_element.Initialize(1);


    // Check that list is empty
    if (unsorted_list.IsFull()) cout << "List is full" << endl;
    else cout << "List is not full" << endl;

    
    // void MakeEmpty();
    //     void ResetList();
    //     ItemType GetNextItem();

    // Check that list has no elements
    current_length = unsorted_list.GetLength();
    print_length(current_length);
    
    assert(current_length == 0);

    // Add an element and check length
    unsorted_list.PutItem(first_element);
    current_length = unsorted_list.GetLength();
    print_length(current_length);
    
    assert(current_length == 1);

    // Delete element added above
    unsorted_list.DeleteItem(first_element);
    current_length = unsorted_list.GetLength();
    print_length(current_length);
    
    assert(current_length == 0);

    // Add 5 elements
    unsorted_list.PutItem(first_element);
    unsorted_list.PutItem(second_element);
    unsorted_list.PutItem(third_element);
    unsorted_list.PutItem(fourth_element);
    unsorted_list.PutItem(fifth_element);
    current_length = unsorted_list.GetLength();
    print_length(current_length);

    assert(current_length == 5);

    // Get fifth_item
    bool found;
    element = unsorted_list.GetItem(fifth_element, found);
    assert(found == true);

    // Iterate over all elements
    unsorted_list.ResetList();
    for(int i = 0; i < unsorted_list.GetLength(); i++)
    {
        cout << "Element " << i << " : " << unsorted_list.GetNextItem().GetValue() << endl;
    };




    return 0;
}