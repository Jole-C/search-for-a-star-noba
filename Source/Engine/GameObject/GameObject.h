
#pragma once
#include <memory>
#include <vector>
#include "../IUpdateable.h"

class ComponentBase;

class GameObject : public IUpdateable
{

public:
	virtual void Initialise();
	virtual void Update();
	bool AddComponent(std::shared_ptr<ComponentBase> componentToAdd);
	bool RemoveComponent(std::shared_ptr<ComponentBase> componentToRemove);

private:

	std::vector<std::shared_ptr<ComponentBase>> Components;
};