#include "Point.hpp"

bool check_cross_product_sign(Point const a, Point const b, Point const c) {
    return ((b.getX() - a.getX()).toFloat() * (c.getY() - a.getY()).toFloat() -
            (b.getY() - a.getY()).toFloat() * (c.getX() - a.getX()).toFloat()) > 0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    bool b1, b2, b3;
    b1 = check_cross_product_sign(a, b, point);
    b2 = check_cross_product_sign(b, c, point);
    b3 = check_cross_product_sign(c, a, point);
    return ((b1 == b2) && (b2 == b3));
}
