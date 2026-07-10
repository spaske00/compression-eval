static void metadata_eevee_geom_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_object_infos_infos.hh");
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("eevee_uniform_shared.hh");
  source.add_dependency("eevee_defines.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
