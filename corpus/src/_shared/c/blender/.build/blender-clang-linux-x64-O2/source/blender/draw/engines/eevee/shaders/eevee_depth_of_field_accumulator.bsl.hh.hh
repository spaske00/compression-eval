static void metadata_eevee_depth_of_field_accumulator_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_depth_of_field_lib.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("gpu_shader_debug_gradients_lib.glsl");
  source.add_dependency("gpu_shader_math_angle_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
