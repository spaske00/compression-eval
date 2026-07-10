static void metadata_eevee_lightprobe_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_closure.bsl.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_lightprobe_volume.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  source.add_dependency("eevee_subsurface_lib.bsl.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
