#pragma once

class Point2D
{
private:
	float m_x;
	float m_y;
	float m_r;
	float m_g;
	float m_b;
public:
	Point2D(float x, float y, float r, float g, float b);
	float getX() const;
	float getY() const;
	float getR() const;
	float getG() const;
	float getB() const;
	void setX(float x);
	void setY(float y);
	void setR(float r);
	void setG(float g);
	void setB(float b);
	void setPosition(float x, float y);
	void setColor(float r, float g, float b);
};

