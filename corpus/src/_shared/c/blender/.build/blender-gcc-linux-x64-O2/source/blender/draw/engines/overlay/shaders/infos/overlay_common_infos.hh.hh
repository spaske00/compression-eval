static void metadata_overlay_common_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("overlay_shader_shared.hh");
  source.add_dependency("select_shader_shared.hh");
  source.add_dependency("select_defines.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
