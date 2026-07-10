static void metadata_eevee_light_shape_display_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_light_data.bsl.hh");
  source.add_dependency("eevee_light_lib.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_volume_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
