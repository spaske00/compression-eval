static void metadata_eevee_light_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("eevee_light_shared.hh");
  source.add_dependency("eevee_ltc_lib.bsl.hh");
  source.add_dependency("eevee_ltc_lut_lib.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
