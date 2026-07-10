static void metadata_gpu_shader_math_matrix_conversion_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_euler_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_compare_lib.glsl");
  source.add_dependency("gpu_shader_math_quaternion_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
