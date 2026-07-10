static void metadata_eevee_spherical_harmonics_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
