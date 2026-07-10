static void metadata_eevee_surf_common_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_lightprobe_shared.hh");
  source.add_dependency("eevee_sampling_shared.hh");
  source.add_dependency("eevee_shadow_shared.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
