#pragma once

//My-Add-SketchPipeline
void AddSketchShadowPass(
	FRDGBuilder& GraphBuilder,
	const FGlobalShaderMap* ShaderMap,
	FRDGTextureRef SceneColor,
	FRDGTextureRef SceneDepth,
	FRDGTextureRef BaseColor,
	FRDGTextureRef SketchData,
	FRDGTextureRef ShadowMask,
	const FRDGDrawTextureInfo& DrawInfo);
//End-24/06/24

//My-Add-SketchPipeline
struct FSketchOutlineInputs
{
	FScreenPassRenderTarget OverrideOutput;
	FScreenPassTexture SceneColor;
	FScreenPassTexture WorldNormal;
	FScreenPassTexture SketchData;
	FVector4f OutlineColor;
	FVector2f Resolution;
};

FScreenPassTexture AddSketchOutlinePass(
	FRDGBuilder& GraphBuilder,
	const FViewInfo& View,
	const FSketchOutlineInputs Inputs);
//End-25/06/24
