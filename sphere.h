#ifndef _SPHERE_
#define _SPHERE_

class sphere final {
    int x_, y_, z_, r_;
    public:
    sphere(int x, int y, int z, int r);
    ~sphere() {}
    int get_x() const;
    int get_y() const;
    int get_z() const;
    int get_r() const;
};

#endif

