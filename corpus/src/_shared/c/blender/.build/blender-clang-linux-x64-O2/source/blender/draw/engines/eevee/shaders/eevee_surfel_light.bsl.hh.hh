static void metadata_eevee_surfel_light_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_closure.bsl.hh");
  source.add_dependency("eevee_light_eval.bsl.hh");
  source.add_dependency("eevee_surfel.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
