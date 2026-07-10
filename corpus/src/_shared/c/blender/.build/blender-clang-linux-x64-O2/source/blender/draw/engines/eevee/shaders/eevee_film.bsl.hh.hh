static void metadata_eevee_film_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_cryptomatte.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("eevee_velocity.bsl.hh");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
