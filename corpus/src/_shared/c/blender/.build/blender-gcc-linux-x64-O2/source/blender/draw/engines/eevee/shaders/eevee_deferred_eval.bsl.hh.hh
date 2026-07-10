static void metadata_eevee_deferred_eval_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_closure.bsl.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_light_eval.bsl.hh");
  source.add_dependency("eevee_lightprobe.bsl.hh");
  source.add_dependency("eevee_renderpass.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_subsurface_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_shared_exponent_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
