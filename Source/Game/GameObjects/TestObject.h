#pragma once
#include "../../Engine/GameObject/GameObject.h"
#include "../../Engine/Component/SpriteComponent.h"

class TestObject : public GameObject
{
public:
	void Initialise();
	void Update();

private:
	std::shared_ptr<SpriteComponent> Sprite;
	float XPosition;
};

