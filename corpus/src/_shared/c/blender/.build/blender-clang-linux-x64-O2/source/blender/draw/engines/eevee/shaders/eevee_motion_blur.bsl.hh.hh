static void metadata_eevee_motion_blur_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("eevee_motion_blur_shared.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_velocity.bsl.hh");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
