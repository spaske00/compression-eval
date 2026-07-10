static void metadata_overlay_outline_prepass_gpencil_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("overlay_outline_infos.hh");
  source.add_dependency("draw_grease_pencil_lib.glsl");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_object_infos_lib.glsl");
  source.add_dependency("draw_view_clipping_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
