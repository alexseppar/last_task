#include "dot.h"
#include <cstdio>

    dot::dot(int x, int y, int z) :
    x_ (x), y_ (y), z_ (z) {}
    int dot::get_x() const {
        return x_;
    }
    int dot::get_y() const {
        return y_;
    }
    int dot::get_z() const {
        return z_;
    }
    void dot::print(FILE *fp) const {
        fprintf(fp, "x_ %d, y_ %d, z_ %d \n", x_, y_, z_);
    }

