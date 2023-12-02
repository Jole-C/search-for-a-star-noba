#include "IRenderable.h"
#include "Vector2f.h"

const Transform2D& IRenderable::GetTransform() const
{
	return Transform;
}

void IRenderable::SetPosition(float x, float y)
{
	Transform.PositionX = x;
	Transform.PositionY = y;
}

void IRenderable::SetPosition(Vector2f location)
{
	Transform.PositionX = location.x;
	Transform.PositionY = location.y;
}

void IRenderable::SetRotation(float r)
{
	Transform.Rotation = r;
}

void IRenderable::SetScale(float sx, float sy)
{
	Transform.ScaleX = sx;
	Transform.ScaleY = sy;
}

void IRenderable::SetScale(Vector2f scale)
{
	Transform.ScaleX = scale.x;
	Transform.ScaleY = scale.y;
}
