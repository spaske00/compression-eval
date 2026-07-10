static void metadata_overlay_outline_detect_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_dependency("overlay_outline_infos.hh");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("overlay_common_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
