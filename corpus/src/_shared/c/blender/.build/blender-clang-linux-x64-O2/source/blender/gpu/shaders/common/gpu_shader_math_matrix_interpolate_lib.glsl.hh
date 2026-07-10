static void metadata_gpu_shader_math_matrix_interpolate_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  source.add_dependency("gpu_shader_math_quaternion_lib.glsl");
  source.add_dependency("gpu_shader_math_rotation_conversion_lib.glsl");
  source.add_dependency("gpu_shader_math_rotation_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
