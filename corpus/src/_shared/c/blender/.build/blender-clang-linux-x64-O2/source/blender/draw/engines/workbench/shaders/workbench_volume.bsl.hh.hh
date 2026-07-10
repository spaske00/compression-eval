static void metadata_workbench_volume_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_object_infos_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_object_infos_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_compare_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
