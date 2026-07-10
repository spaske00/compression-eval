static void metadata_gpu_shader_compositor_ocio_processor_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_dependency("compositor_ocio_infos.hh");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_dependency("gpu_shader_compositor_ocio_processor_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
