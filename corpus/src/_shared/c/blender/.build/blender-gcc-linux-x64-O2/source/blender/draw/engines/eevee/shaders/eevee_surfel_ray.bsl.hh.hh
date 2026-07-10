static void metadata_eevee_surfel_ray_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_surfel.bsl.hh");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
