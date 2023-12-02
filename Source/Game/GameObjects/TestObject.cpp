#include "TestObject.h"

void TestObject::Initialise()
{
	Sprite = std::make_shared<SpriteComponent>();
	Sprite->Initialise(L"Resource/Textures/Arrow.dds", L"Resource/Shaders/UnlitColor.fx");
	AddComponent(Sprite);
}

void TestObject::Update()
{
	Sprite->GetBillboard()->SetPosition(XPosition, 0);
}
