static void metadata_gpu_shader_colorspace_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_srgb_to_framebuffer_space_infos.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
