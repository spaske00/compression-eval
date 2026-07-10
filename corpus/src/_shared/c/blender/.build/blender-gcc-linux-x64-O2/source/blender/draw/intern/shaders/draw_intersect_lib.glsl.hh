static void metadata_draw_intersect_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("draw_shape_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
