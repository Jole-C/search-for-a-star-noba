#pragma once
#include "ComponentBase.h"
#include "../IRenderable.h"
#include <string>

class SpriteComponent : public ComponentBase
{
public:
	void Initialise(const wchar_t* TexturePath, const wchar_t* ShaderPath);
	void Update();

	IRenderable* GetBillboard();

private:
	IRenderable* Billboard;
	ITexture* Texture;
	IShader* Shader;

};

