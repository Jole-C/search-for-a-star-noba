#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include <algorithm>
#include "IService.h"

class ServiceLocator
{

private:
	ServiceLocator() {}
	static std::vector<IService*> Services;

public:
	ServiceLocator(const ServiceLocator&) = delete;

	static ServiceLocator& GetInstance()
	{
		static ServiceLocator NewInstance;
		return NewInstance;
	}

	template<class TService>
	static bool RegisterService(TService* ServiceToAdd)
	{
		if (ServiceToAdd == nullptr)
		{
			std::cout << "Object is nullptr." << std::endl;
			return false;
		}

		if (std::is_base_of<IService, TService>::value == false)
		{
			std::cout << "Object is not a service." << std::endl;
			return false;
		}

		Services.emplace_back(ServiceToAdd);

		return true;
	}

	template<class TService>
	static bool UnregisterService(TService* ServiceToRemove)
	{
		if (ServiceToRemove == nullptr)
		{
			;
			std::cout << "Object is nullptr.";
			return false;
		}

		if (std::is_base_of<IService, ServiceToRemove> == false)
		{
			std::cout << "Object is not a service.";
			return false;
		}

		std::shared_ptr<IService> service = std::static_pointer_cast<IService>(ServiceToRemove);
		auto foundService = std::find(Services.front(), Services.back(), service);

		if (foundService != nullptr)
		{
			foundService->MarkForRemoval();
		}

		return true;
	}

	template<class TService>
	static TService* GetService()
	{
		for (IService* Service : Services) 
		{
			if (auto* FoundService = dynamic_cast<TService*>(Service)) 
			{
				return FoundService;
			}
		}

		std::cout << "Could not find Service." << std::endl;
		return nullptr;
	}

	void ClearServices();
};