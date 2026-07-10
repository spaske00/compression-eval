static void metadata_compositor_keying_replace_chroma_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_dependency("compositor_keying_infos.hh");
  source.add_dependency("gpu_shader_common_color_utils.glsl");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
