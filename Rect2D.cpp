#include "Rect2D.h"
#include <vector>
#include <iostream>

Rect2D::Rect2D(Point2D centre, float largeur, float hauteur, float r, float g, float b)
	:Forme2D(), m_centre{ centre }, m_largeur{ largeur }, m_hauteur{ hauteur }	
{
	m_points.push_back({ m_centre.getX() - largeur / 2, m_centre.getY() - hauteur / 2, r, g, b });
	m_points.push_back({ m_centre.getX() - largeur / 2, m_centre.getY() + hauteur / 2, r, g, b });
	m_points.push_back({ m_centre.getX() + largeur / 2, m_centre.getY() + hauteur / 2, r, g, b });
	m_points.push_back({ m_centre.getX() + largeur / 2, m_centre.getY() - hauteur / 2, r, g, b });
}

void Rect2D::afficher()
{
	std::cout << "Rect2D\n";
	for (Point2D& point : m_points)
	{
		std::cout << "X: " << point.getX() << ", ";
		std::cout << "Y: " << point.getY() << ", ";
		std::cout << "R: " << point.getR() << ", ";
		std::cout << "G: " << point.getG() << ", ";
		std::cout << "B: " << point.getB() << "\n";
	}
}

float Rect2D::aire()
{
	return m_largeur * m_hauteur;
}