#include "GameObject.h"
#include "../Component/ComponentBase.h"
#include <iostream>

void GameObject::Initialise()
{
}

void GameObject::Update()
{
}

bool GameObject::AddComponent(std::shared_ptr<ComponentBase> componentToAdd)
{
	if (componentToAdd == nullptr)
	{
		std::cout << "Object is nullptr.";
		return false;
	}

	Components.emplace_back(componentToAdd);

	return true;
}

bool GameObject::RemoveComponent(std::shared_ptr<ComponentBase> componentToRemove)
{
	if (componentToRemove == nullptr)
	{
		std::cout << "Object is nullptr.";
		return false;
	}

	for (std::shared_ptr<ComponentBase> Component : Components)
	{
		if (Component == componentToRemove)
		{
			Component->MarkForRemoval();
		}
	}

	return true;
}
