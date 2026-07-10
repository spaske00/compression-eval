static void metadata_eevee_debug_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(18151572126051718857LLU));
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_debug_shared.hh");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_light_iter.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_lightprobe_volume.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_shadow.bsl.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_shadow_tilemap_lib.bsl.hh");
  source.add_dependency("gpu_shader_debug_gradients_lib.glsl");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_compare_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
