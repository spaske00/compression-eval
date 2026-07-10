static void metadata_overlay_volume_gridlines_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("overlay_volume_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_compare_lib.glsl");
  source.add_dependency("select_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
