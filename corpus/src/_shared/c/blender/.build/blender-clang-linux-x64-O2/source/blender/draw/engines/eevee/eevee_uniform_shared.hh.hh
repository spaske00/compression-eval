static void metadata_eevee_uniform_shared_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_camera_shared.hh");
  source.add_dependency("eevee_film_shared.hh");
  source.add_dependency("eevee_hizbuffer_shared.hh");
  source.add_dependency("eevee_raytrace_shared.hh");
  source.add_dependency("eevee_renderbuffers_shared.hh");
  source.add_dependency("eevee_subsurface_shared.hh");
  source.add_dependency("eevee_volume_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
