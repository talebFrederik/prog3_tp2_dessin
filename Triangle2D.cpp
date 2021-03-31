#include "Triangle2D.h"
#include "Point2D.h"

#include <vector>
#include <iostream>

Triangle2D::Triangle2D(std::vector<Point2D> points) : Forme2D{ points } {}

void Triangle2D::afficher()
{
	std::cout << "Triangle2D\n";
	for (Point2D& point : m_points)
	{
		std::cout << "X: " << point.getX() << ", ";
		std::cout << "Y: " << point.getY() << ", ";
		std::cout << "R: " << point.getR() << ", ";
		std::cout << "G: " << point.getG() << ", ";
		std::cout << "B: " << point.getB() << "\n";
	}
}

float Triangle2D::aire()
{
	// Formule de Heron
	float a = distance(m_points[0], m_points[1]);
	float b = distance(m_points[1], m_points[2]);
	float c = distance(m_points[2], m_points[0]);
	float p = permietre() / 2;

	return std::sqrt(p*(p - a)*(p - b)*(p - c));
}
