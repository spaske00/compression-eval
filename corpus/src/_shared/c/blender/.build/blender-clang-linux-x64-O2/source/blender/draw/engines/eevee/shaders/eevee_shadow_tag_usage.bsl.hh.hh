static void metadata_eevee_shadow_tag_usage_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_lightprobe_shared.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow_page_ops.bsl.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  source.add_dependency("eevee_volume_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_vector_compare_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
