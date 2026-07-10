static void metadata_eevee_shadow_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("eevee_utility_tx.bsl.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
