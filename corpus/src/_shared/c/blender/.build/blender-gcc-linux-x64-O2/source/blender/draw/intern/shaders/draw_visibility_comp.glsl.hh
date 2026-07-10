static void metadata_draw_visibility_comp_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_builtin(metadata::Builtin(14753491627235796485LLU));
  source.add_builtin(metadata::Builtin(13135399807675160830LLU));
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("draw_intersect_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
