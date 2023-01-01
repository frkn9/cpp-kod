#include <iostream>

using namespace std

template<typename E>
class Position<E> {
    public:
        E& operator*();
        Position left() const;
        Position right() const;
        Position parent() const;
        bool isRoot() const;
        bool isExternal() const;
};


template<typename E>
class BinaryTree<E> {
    public:
        class Position;
        class PositionList;
    public:
        int size() const;
        bool empty() const;
        Position root() const;
        PositionList positions() const;
};

