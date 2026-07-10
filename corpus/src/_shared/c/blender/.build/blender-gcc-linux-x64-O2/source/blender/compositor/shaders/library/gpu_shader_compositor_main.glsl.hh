static void metadata_gpu_shader_compositor_main_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_compositor_eval.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
