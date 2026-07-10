static void metadata_eevee_lightprobe_sphere_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_lightprobe_shared.hh");
  source.add_dependency("eevee_octahedron_lib.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_fast_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
