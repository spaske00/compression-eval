static void metadata_overlay_grid_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("overlay_grid_infos.hh");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  source.add_dependency("overlay_grid_common_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
