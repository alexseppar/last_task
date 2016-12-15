#include "sphere.h"

sphere::sphere(int x, int y, int z, int r) :
x_ (x), y_ (y), z_ (z), r_ (r) {}

int sphere::get_x() const {
    return x_;
}

int sphere::get_y() const {
    return y_;
}

int sphere::get_z() const {
    return z_;
}

int sphere::get_r() const {
    return r_;
}
