static void metadata_compositor_map_uv_anisotropic_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_builtin(metadata::Builtin(14753491627235796485LLU));
  source.add_dependency("compositor_map_uv_infos.hh");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_shared_variable(Type::float2_t, "uv_coordinates_table[gl_WorkGroupSize.x][gl_WorkGroupSize.y]");
  UNUSED_VARS(source, g_functions, g_formats);
}
