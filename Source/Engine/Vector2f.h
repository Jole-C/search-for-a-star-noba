#pragma once
class Vector2f
{
public:

	Vector2f(float NewX, float NewY)
	{
		x = NewX;
		y = NewY;
	};

	float x;
	float y;

	float direction;
	float magnitude;

};

