#ifndef COMMONPARRAY_H
#define COMMONPARRAY_H

// addToArray(PArray<T>, param1, param2);
// hide addItem and addArray

#include "common-array.h"

// structs for PArray need a parameterless constructor and a copy operator
// do addArray

namespace Common
{

template <typename T>
struct PArray : Array<T*>
{
public:
    PArray()
        : Array<T*>()
    {
    }

//    virtual void addItem(const T &item)
//    {
//        T t = new T();
//        t.copy(item);
//        Array::addItem(t);
//    }

    template <typename TDerived> // TItemPointer is T* but can be derived
    void addItem2(TDerived * item)
    {
        Array<T*>::addItem(item);
    }

    virtual ~PArray()
    {
        for(unsigned int i = 0; i < this->Count; i++)
        {
            delete this->Items[i]; //does this dispose before Array? Make sure it does.
        }
    }

};

}

#endif // COMMONPARRAY_H
