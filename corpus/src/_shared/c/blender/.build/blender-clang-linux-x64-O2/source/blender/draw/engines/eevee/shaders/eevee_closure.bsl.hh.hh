static void metadata_eevee_closure_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_bxdf.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
