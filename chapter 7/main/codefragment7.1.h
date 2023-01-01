#include <iostream>

template<typename E>                           //base element type
class Position<E> {                             //a node position
    public:
        E& operator*();                         //get element
        Position parent() const;                //get parent
        PositionList children() const;          //get node's children
        bool isRoot() const;                    //root node?
        bool isExternal const;                  //external node?
};

