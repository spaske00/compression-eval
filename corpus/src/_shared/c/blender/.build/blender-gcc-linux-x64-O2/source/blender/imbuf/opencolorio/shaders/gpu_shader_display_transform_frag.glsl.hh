static void metadata_gpu_shader_display_transform_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("ocio_shader_shared.hh");
  source.add_dependency("gpu_shader_display_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
