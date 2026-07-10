static void metadata_eevee_lightprobe_sphere_bake_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_light_shared.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_spherical_harmonics.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
