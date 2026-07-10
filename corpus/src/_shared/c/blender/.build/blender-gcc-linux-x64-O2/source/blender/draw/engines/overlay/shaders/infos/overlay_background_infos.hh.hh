static void metadata_overlay_background_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("overlay_common_infos.hh");
  source.add_dependency("overlay_fullscreen_infos.hh");
  source.add_dependency("overlay_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
