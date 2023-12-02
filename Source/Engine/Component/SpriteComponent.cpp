#include "SpriteComponent.h"
#include "../IGraphics.h"
#include "../ServiceLocator.h"


void SpriteComponent::Initialise(const wchar_t* TexturePath, const wchar_t* ShaderPath)
{
	IGraphics* Graphics = ServiceLocator::GetService<IGraphics>();
	Texture = Graphics->CreateTexture(TexturePath);
	Shader = Graphics->CreateShader(ShaderPath, "VS_Main", "vs_4_0", "PS_Main", "ps_4_0", Texture);
	Billboard = Graphics->CreateBillboard(Shader);
}

void SpriteComponent::Update()
{
}

IRenderable* SpriteComponent::GetBillboard()
{
	return Billboard;
}
