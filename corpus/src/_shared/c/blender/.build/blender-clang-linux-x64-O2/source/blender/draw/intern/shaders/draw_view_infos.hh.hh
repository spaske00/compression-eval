static void metadata_draw_view_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_defines.hh");
  source.add_dependency("draw_command_shared.hh");
  source.add_dependency("draw_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
