static void metadata_compositor_glare_sun_beams_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_dependency("compositor_glare_infos.hh");
  source.add_dependency("gpu_shader_common_hash.glsl");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
