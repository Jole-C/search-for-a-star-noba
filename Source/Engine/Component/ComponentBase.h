#pragma once
#include <memory>

class GameObject;

class ComponentBase
{

public:
	virtual void Initialise();
	virtual void Update();

	void MarkForRemoval();
	bool IsMarkedForRemoval();
	std::shared_ptr<GameObject> GetOwner();

private:

	bool ShouldBeRemoved = false;
	std::shared_ptr<GameObject> Owner;
};

