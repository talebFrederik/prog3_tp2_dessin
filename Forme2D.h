#pragma once

#include "Point2D.h"

#include <vector>

class Forme2D
{
private:
protected:
	std::vector<Point2D> m_points;
	float* m_tabPoints;
	float distance(Point2D p1, Point2D p2);
public:
	Forme2D();
	Forme2D(std::vector<Point2D> points);
	void ajouterPoint(Point2D point);
	void supprimerPoint();
	virtual void afficher();
	float* dessiner();
	float permietre();
	int bufferSize();
};

