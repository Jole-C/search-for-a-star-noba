#include "IService.h"

void IService::MarkForRemoval()
{
	ShouldBeRemoved = true;
}

bool IService::IsMarkedForRemoval()
{
	return ShouldBeRemoved;
}

void IService::Update()
{

}