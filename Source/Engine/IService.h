#pragma once
class IService
{
public:

	virtual void Update();
	void MarkForRemoval();
	bool IsMarkedForRemoval();

private:

	bool ShouldBeRemoved = false;
};

