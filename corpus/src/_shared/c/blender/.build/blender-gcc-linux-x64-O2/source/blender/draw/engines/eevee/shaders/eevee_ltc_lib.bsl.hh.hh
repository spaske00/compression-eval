static void metadata_eevee_ltc_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
