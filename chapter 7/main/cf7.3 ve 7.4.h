
Algorithm depth(T, p):
if p.isRoot() then
return 0
else
return 1+depth(T, p.parent())

//c++ implementation

int depth(const Tree& T, const Position& p) { if (p.isRoot())
    return 0; // root has depth 0
else
    return 1 + depth(T, p.parent()); // 1 + (depth of parent)
}