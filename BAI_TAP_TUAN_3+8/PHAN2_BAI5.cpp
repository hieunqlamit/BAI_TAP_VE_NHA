#include <bits/stdc++.h>
struct Point {
    int x, y;
};

struct Rect {
    int x, y;    
    int w, h; 
    
    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};

