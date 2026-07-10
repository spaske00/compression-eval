static void metadata_gpu_shader_2D_node_socket_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_2D_node_socket_infos.hh");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
