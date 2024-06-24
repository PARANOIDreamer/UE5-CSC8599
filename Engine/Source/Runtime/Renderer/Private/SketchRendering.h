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
