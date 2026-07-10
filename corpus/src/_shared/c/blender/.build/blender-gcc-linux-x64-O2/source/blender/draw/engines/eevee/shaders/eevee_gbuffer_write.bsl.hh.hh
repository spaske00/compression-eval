static void metadata_eevee_gbuffer_write_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_gbuffer_types.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
