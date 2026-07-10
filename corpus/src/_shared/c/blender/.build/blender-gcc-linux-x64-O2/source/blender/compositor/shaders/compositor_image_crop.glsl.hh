static void metadata_compositor_image_crop_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_dependency("compositor_image_crop_infos.hh");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
