static void metadata_gpu_shader_image_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("gpu_shader_3D_image_infos.hh");
  source.add_dependency("gpu_shader_colorspace_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
