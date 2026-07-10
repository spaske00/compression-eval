static void metadata_gpu_shader_material_output_material_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(8958605483171873792LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(8958605483171873792LLU)},
    };
    source.add_function("node_output_material_surface", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(8958605483171873792LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(8958605483171873792LLU)},
    };
    source.add_function("node_output_material_volume", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("node_output_material_displacement", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("node_output_material_thickness", args, g_functions);
  }
  source.add_dependency("gpu_shader_material_transform_utils.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
