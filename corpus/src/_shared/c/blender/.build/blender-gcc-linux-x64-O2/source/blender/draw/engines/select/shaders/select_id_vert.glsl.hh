static void metadata_select_id_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(393272093471268436LLU));
  source.add_dependency("select_id_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_view_clipping_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("overlay_common_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
