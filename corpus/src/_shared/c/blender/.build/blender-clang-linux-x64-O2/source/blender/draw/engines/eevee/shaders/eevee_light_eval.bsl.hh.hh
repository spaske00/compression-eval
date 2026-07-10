static void metadata_eevee_light_eval_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_bxdf_types.bsl.hh");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_shadow.bsl.hh");
  source.add_dependency("eevee_shadow_tracing.bsl.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
