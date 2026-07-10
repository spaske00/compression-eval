static void metadata_image_engine_image_tiled_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("engine_image_infos.hh");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  source.add_dependency("gpu_shader_tiled_image_lookup_lib.glsl");
  source.add_dependency("image_engine_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
