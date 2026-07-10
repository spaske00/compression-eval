static void metadata_eevee_shadow_tag_update_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(18151572126051718857LLU));
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_shadow_page_ops.bsl.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
