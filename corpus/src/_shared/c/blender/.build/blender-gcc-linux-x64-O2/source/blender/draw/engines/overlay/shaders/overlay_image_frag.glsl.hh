static void metadata_overlay_image_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("overlay_edit_mode_infos.hh");
  source.add_dependency("overlay_extra_infos.hh");
  source.add_dependency("draw_colormanagement_lib.glsl");
  source.add_dependency("select_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
