static void metadata_eevee_ray_tile_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("eevee_closure.bsl.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
