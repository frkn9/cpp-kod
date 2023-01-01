#include <iostream>
#include "codefragment7.1.h"

template <typename E>                                   //base element type
class Tree<E> {                                                 
    public:                                         
        class Position;                                 //a node of posiitpn
        class PositionList;                             //a list of positions
    public:
        int size() const;                               //number of nodes
        bool empty() const;                             //is tree empty?
        Position root() const;                          //get the root
        PositionList positions() const;                 //get positions of all nodes
};