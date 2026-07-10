static void metadata_compositor_parallel_reduction_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_builtin(metadata::Builtin(7070875563240083042LLU));
  source.add_builtin(metadata::Builtin(13135399807675160830LLU));
  source.add_builtin(metadata::Builtin(8536819494230177402LLU));
  source.add_dependency("compositor_parallel_reduction_infos.hh");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
