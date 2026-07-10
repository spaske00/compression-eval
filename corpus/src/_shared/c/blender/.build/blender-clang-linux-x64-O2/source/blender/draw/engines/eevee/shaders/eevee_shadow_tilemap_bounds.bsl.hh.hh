static void metadata_eevee_shadow_tilemap_bounds_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("draw_shape_lib.glsl");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
