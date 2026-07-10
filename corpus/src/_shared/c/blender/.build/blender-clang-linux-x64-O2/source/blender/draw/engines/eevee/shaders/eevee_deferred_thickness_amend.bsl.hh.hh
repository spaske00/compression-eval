static void metadata_eevee_deferred_thickness_amend_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_gbuffer_types.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_light_data.bsl.hh");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow_tracing.bsl.hh");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
