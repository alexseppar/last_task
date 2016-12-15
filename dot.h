#ifndef _DOT_
#define _DOT_

#include <cstdio>

class dot final {
    int x_, y_, z_;
    public:
    dot(int x, int y, int z);
    ~dot() {}
    int get_x() const;
    int get_y() const;
    int get_z() const;
    void print(FILE *fp = stdout) const;
};

#endif
