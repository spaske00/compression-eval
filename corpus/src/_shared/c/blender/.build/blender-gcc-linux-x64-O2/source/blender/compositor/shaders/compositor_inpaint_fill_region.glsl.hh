static void metadata_compositor_inpaint_fill_region_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_dependency("compositor_inpaint_infos.hh");
  source.add_dependency("gpu_shader_compositor_jump_flooding_lib.glsl");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
