static void metadata_compositor_keying_screen_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_builtin(metadata::Builtin(7070875563240083042LLU));
  source.add_builtin(metadata::Builtin(8536819494230177402LLU));
  source.add_dependency("compositor_keying_screen_infos.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_shared_variable(Type::float2_t, "cached_marker_positions[gl_WorkGroupSize.x * gl_WorkGroupSize.y]");
  source.add_shared_variable(Type::float4_t, "cached_marker_colors[gl_WorkGroupSize.x * gl_WorkGroupSize.y]");
  UNUSED_VARS(source, g_functions, g_formats);
}
