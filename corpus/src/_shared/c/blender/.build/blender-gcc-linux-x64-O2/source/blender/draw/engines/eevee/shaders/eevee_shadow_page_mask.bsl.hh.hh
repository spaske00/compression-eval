static void metadata_eevee_shadow_page_mask_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_shadow_page_ops.bsl.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
