static void metadata_eevee_shadow_tracing_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow.bsl.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  source.add_dependency("gpu_shader_ray_utils_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
