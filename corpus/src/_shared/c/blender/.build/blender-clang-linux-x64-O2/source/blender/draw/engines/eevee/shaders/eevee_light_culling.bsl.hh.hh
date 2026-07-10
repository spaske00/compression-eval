static void metadata_eevee_light_culling_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_intersect_lib.glsl");
  source.add_dependency("draw_shape_lib.glsl");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_light_shared.hh");
  source.add_dependency("gpu_shader_debug_gradients_lib.glsl");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
