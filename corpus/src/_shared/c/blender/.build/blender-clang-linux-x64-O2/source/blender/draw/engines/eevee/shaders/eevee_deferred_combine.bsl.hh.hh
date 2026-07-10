static void metadata_eevee_deferred_combine_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_renderpass.bsl.hh");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_shared_exponent_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
