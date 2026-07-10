static void metadata_eevee_ray_trace_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_closure.bsl.hh");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_lightprobe.bsl.hh");
  source.add_dependency("eevee_lightprobe_plane.bsl.hh");
  source.add_dependency("eevee_ray_trace_screen_lib.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
