static void metadata_eevee_subsurface_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_subsurface_shared.hh");
  source.add_dependency("eevee_utility_tx.bsl.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
