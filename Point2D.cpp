#include "Point2D.h"

Point2D::Point2D(float x, float y, float r, float g, float b)
	: m_x{ x }, m_y{ y }, m_r{ r }, m_g{ g }, m_b{ b } {}

float Point2D::getX() const { return m_x; }
float Point2D::getY() const { return m_y; }
float Point2D::getR() const { return m_r; }
float Point2D::getG() const { return m_g; }
float Point2D::getB() const { return m_b; }

void Point2D::setX(float x) { m_x = x; }
void Point2D::setY(float y) { m_y = y; }
void Point2D::setR(float r) { m_r = r; }
void Point2D::setG(float g) { m_g = g; }
void Point2D::setB(float b) { m_b = b; }

void Point2D::setPosition(float x, float y)
{
	m_x = x;
	m_y = y;
}
void Point2D::setColor(float r, float g, float b)
{
	m_r = r;
	m_g = g;
	m_b = b;
}