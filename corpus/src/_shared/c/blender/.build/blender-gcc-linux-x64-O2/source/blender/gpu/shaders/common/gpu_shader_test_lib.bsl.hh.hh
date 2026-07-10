static void metadata_gpu_shader_test_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_compare_lib.glsl");
  source.add_dependency("GPU_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
