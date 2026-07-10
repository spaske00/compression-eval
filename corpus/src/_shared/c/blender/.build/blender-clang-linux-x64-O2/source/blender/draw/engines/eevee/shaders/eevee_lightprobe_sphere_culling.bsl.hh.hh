static void metadata_eevee_lightprobe_sphere_culling_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_lightprobe_volume.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
