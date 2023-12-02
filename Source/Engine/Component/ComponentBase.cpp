#include "ComponentBase.h"


void ComponentBase::Initialise()
{
}

void ComponentBase::Update()
{
}

void ComponentBase::MarkForRemoval()
{
	ShouldBeRemoved = true;
}

bool ComponentBase::IsMarkedForRemoval()
{
	return true;
}

std::shared_ptr<GameObject> ComponentBase::GetOwner()
{
	return std::shared_ptr<GameObject>();
}
