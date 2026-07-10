static void metadata_eevee_volume_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
