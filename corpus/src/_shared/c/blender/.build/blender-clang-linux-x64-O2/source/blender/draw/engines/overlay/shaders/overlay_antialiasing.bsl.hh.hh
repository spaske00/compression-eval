static void metadata_overlay_antialiasing_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("overlay_common_infos.hh");
  source.add_dependency("overlay_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
