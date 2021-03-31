#pragma once

#include "Forme2D.h"

#include <vector>

class Triangle2D :
    public Forme2D
{
private:
protected:
public:
    Triangle2D(std::vector<Point2D> points);
    void afficher();
    float aire();
};

