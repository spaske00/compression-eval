static void metadata_eevee_lookdev_copy_world_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_light_shared.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
