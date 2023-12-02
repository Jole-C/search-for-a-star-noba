#include "ServiceLocator.h"

std::vector<IService*> ServiceLocator::Services = {};

void ServiceLocator::ClearServices()
{
}