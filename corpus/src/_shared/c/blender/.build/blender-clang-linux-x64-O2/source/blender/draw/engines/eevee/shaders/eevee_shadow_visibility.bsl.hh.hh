static void metadata_eevee_shadow_visibility_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("draw_intersect_lib.glsl");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
