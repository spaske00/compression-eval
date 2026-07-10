static void metadata_overlay_wireframe_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_builtin(metadata::Builtin(17835192689340654010LLU));
  source.add_dependency("overlay_wireframe_infos.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  source.add_dependency("overlay_common_lib.glsl");
  source.add_dependency("select_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
