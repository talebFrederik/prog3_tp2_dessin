#include "Forme2D.h"

#include <vector>
#include <iostream>

Forme2D::Forme2D() : m_tabPoints{ nullptr } {}

Forme2D::Forme2D(std::vector<Point2D> points) : m_points{points}, m_tabPoints{ nullptr } {}

void Forme2D::ajouterPoint(Point2D point)
{
	m_points.push_back(point);
}

void Forme2D::supprimerPoint()
{
	if (m_points.size() > 0) 
	{
		m_points.erase(m_points.begin());
	}
}

void Forme2D::afficher()
{
	std::cout << "Forme2D\n";
	for (Point2D &point : m_points)
	{
		std::cout << "X: " << point.getX() << ", ";
		std::cout << "Y: " << point.getY() << ", ";
		std::cout << "R: " << point.getR() << ", ";
		std::cout << "G: " << point.getG() << ", ";
		std::cout << "B: " << point.getB() << "\n";
	}
}

float* Forme2D::dessiner()
{
	delete(m_tabPoints);
	int sizeTab = m_points.size() * 5;
	m_tabPoints = new float[sizeTab] {};

	int index{ 0 };
	for (int i = 0; i < m_points.size(); ++i)
	{
		m_tabPoints[index] = m_points[i].getX();
		index++;
		m_tabPoints[index] = m_points[i].getY();
		index++;
		m_tabPoints[index] = m_points[i].getR();
		index++;
		m_tabPoints[index] = m_points[i].getG();
		index++;
		m_tabPoints[index] = m_points[i].getB();
		index++;
	}

	return m_tabPoints;
}

float Forme2D::permietre()
{
	if (m_points.size() < 2) { return 0.0f; }

	float perimetre = 0;
	for (int i = 1; i < m_points.size(); ++i)
	{
		perimetre += distance(m_points[i - 1], m_points[i]);
	}
	perimetre += distance(m_points.back(), m_points[0]);

	return perimetre;
}

int Forme2D::bufferSize() { return m_points.size()*5; }

float Forme2D::distance(Point2D p1, Point2D p2)
{
	float x1x2 = std::pow(p2.getX() - p1.getX(), 2);
	float y1y2 = std::pow(p2.getY() - p1.getY(), 2);
	return std::sqrt(x1x2 + y1y2);
}