static void metadata_gpencil_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_dependency("gpencil_infos.hh");
  source.add_dependency("draw_colormanagement_lib.glsl");
  source.add_dependency("draw_grease_pencil_lib.glsl");
  source.add_dependency("gpu_shader_common_color_utils.glsl");
  source.add_dependency("gpu_shader_common_hash.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
