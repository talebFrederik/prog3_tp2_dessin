#pragma once

#include "Forme2D.h"
#include "Point2D.h"

class Rect2D :
    public Forme2D
{
private:
    float m_largeur;
    float m_hauteur;
    Point2D m_centre;
protected:
public:
    Rect2D(Point2D centre, float largeur, float hauteur, float r, float g, float b);
    void afficher();
    float aire();

};

