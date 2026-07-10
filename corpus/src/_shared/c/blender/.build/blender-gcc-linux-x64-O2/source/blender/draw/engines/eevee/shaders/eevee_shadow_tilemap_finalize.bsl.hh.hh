static void metadata_eevee_shadow_tilemap_finalize_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_matrix_projection_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
