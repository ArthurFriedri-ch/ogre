// This file is part of the OGRE project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at https://www.ogre3d.org/licensing.

/// Binding points for the Compute descriptor set profile.
///
/// These must stay in sync with VulkanRenderSystem::initComputeDescriptorSetProfile()
/// (RenderSystems/Vulkan/src/OgreVulkanRenderSystem.cpp), which currently binds:
///   binding 0: storage image  (VK_DESCRIPTOR_TYPE_STORAGE_IMAGE)
///   binding 1: uniform buffer (VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC)
///
/// Compute shaders (GLSL and HLSL) should reference these macros rather than
/// hard-coding binding indices, so the shader source and the C++ descriptor
/// set layout can't silently drift apart.

// @public-api

#define OGRE_COMPUTE_IMAGE_BINDING 0
#define OGRE_COMPUTE_UBO_BINDING   1
