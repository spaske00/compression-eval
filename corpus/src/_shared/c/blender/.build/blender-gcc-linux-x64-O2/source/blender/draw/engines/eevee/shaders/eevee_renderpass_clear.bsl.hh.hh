static void metadata_eevee_renderpass_clear_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_cryptomatte.bsl.hh");
  source.add_dependency("eevee_renderpass.bsl.hh");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
