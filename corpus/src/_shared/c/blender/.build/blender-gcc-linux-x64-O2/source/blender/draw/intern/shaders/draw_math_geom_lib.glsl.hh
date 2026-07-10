static void metadata_draw_math_geom_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
