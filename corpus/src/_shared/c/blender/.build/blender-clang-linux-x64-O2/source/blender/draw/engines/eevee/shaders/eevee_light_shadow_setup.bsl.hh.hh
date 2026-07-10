static void metadata_eevee_light_shadow_setup_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_light_shared.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_math_fast_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_projection_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
