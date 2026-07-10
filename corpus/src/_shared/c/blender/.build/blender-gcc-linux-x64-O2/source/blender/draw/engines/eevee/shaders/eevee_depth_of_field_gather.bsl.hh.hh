static void metadata_eevee_depth_of_field_gather_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_depth_of_field_accumulator.bsl.hh");
  source.add_dependency("eevee_depth_of_field_tiles.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
