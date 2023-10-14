#ifndef TGLANG_H
#define TGLANG_H

/**
 * Library for determining programming or markup language of a code snippet.
 */

#include <stddef.h>
#include "annotator.h"

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#  ifdef tglang_EXPORTS
#    define TGLANG_EXPORT __declspec(dllexport)
#  else
#    define TGLANG_EXPORT __declspec(dllimport)
#  endif
#else
#  define TGLANG_EXPORT __attribute__((visibility("default")))
#endif

/**
 * List of supported languages.
 */
enum TglangLanguage {
  TGLANG_LANGUAGE_OTHER,
  TGLANG_LANGUAGE_1S_ENTERPRISE,
  TGLANG_LANGUAGE_ABAP,
  TGLANG_LANGUAGE_ACTIONSCRIPT,
  TGLANG_LANGUAGE_ADA,
  TGLANG_LANGUAGE_APACHE_GROOVY,
  TGLANG_LANGUAGE_APEX,
  TGLANG_LANGUAGE_APPLESCRIPT,
  TGLANG_LANGUAGE_ASP,
  TGLANG_LANGUAGE_ASSEMBLY,
  TGLANG_LANGUAGE_AUTOHOTKEY,
  TGLANG_LANGUAGE_AWK,
  TGLANG_LANGUAGE_BASIC,
  TGLANG_LANGUAGE_BATCH,
  TGLANG_LANGUAGE_BISON,
  TGLANG_LANGUAGE_C,
  TGLANG_LANGUAGE_CLOJURE,
  TGLANG_LANGUAGE_CMAKE,
  TGLANG_LANGUAGE_COBOL,
  TGLANG_LANGUAGE_COFFESCRIPT,
  TGLANG_LANGUAGE_COMMON_LISP,
  TGLANG_LANGUAGE_CPLUSPLUS,
  TGLANG_LANGUAGE_CRYSTAL,
  TGLANG_LANGUAGE_CSHARP,
  TGLANG_LANGUAGE_CSS,
  TGLANG_LANGUAGE_CSV,
  TGLANG_LANGUAGE_D,
  TGLANG_LANGUAGE_DART,
  TGLANG_LANGUAGE_DELPHI,
  TGLANG_LANGUAGE_DOCKER,
  TGLANG_LANGUAGE_ELIXIR,
  TGLANG_LANGUAGE_ELM,
  TGLANG_LANGUAGE_ERLANG,
  TGLANG_LANGUAGE_FIFT,
  TGLANG_LANGUAGE_FORTH,
  TGLANG_LANGUAGE_FORTRAN,
  TGLANG_LANGUAGE_FSHARP,
  TGLANG_LANGUAGE_FUNC,
  TGLANG_LANGUAGE_GAMS,
  TGLANG_LANGUAGE_GO,
  TGLANG_LANGUAGE_GRADLE,
  TGLANG_LANGUAGE_GRAPHQL,
  TGLANG_LANGUAGE_HACK,
  TGLANG_LANGUAGE_HASKELL,
  TGLANG_LANGUAGE_HTML,
  TGLANG_LANGUAGE_ICON,
  TGLANG_LANGUAGE_IDL,
  TGLANG_LANGUAGE_INI,
  TGLANG_LANGUAGE_JAVA,
  TGLANG_LANGUAGE_JAVASCRIPT,
  TGLANG_LANGUAGE_JSON,
  TGLANG_LANGUAGE_JULIA,
  TGLANG_LANGUAGE_KEYMAN,
  TGLANG_LANGUAGE_KOTLIN,
  TGLANG_LANGUAGE_LATEX,
  TGLANG_LANGUAGE_LISP,
  TGLANG_LANGUAGE_LOGO,
  TGLANG_LANGUAGE_LUA,
  TGLANG_LANGUAGE_MAKEFILE,
  TGLANG_LANGUAGE_MARKDOWN,
  TGLANG_LANGUAGE_MATLAB,
  TGLANG_LANGUAGE_NGINX,
  TGLANG_LANGUAGE_NIM,
  TGLANG_LANGUAGE_OBJECTIVE_C,
  TGLANG_LANGUAGE_OCAML,
  TGLANG_LANGUAGE_OPENEDGE_ABL,
  TGLANG_LANGUAGE_PASCAL,
  TGLANG_LANGUAGE_PERL,
  TGLANG_LANGUAGE_PHP,
  TGLANG_LANGUAGE_PL_SQL,
  TGLANG_LANGUAGE_POWERSHELL,
  TGLANG_LANGUAGE_PROLOG,
  TGLANG_LANGUAGE_PROTOBUF,
  TGLANG_LANGUAGE_PYTHON,
  TGLANG_LANGUAGE_QML,
  TGLANG_LANGUAGE_R,
  TGLANG_LANGUAGE_RAKU,
  TGLANG_LANGUAGE_REGEX,
  TGLANG_LANGUAGE_RUBY,
  TGLANG_LANGUAGE_RUST,
  TGLANG_LANGUAGE_SAS,
  TGLANG_LANGUAGE_SCALA,
  TGLANG_LANGUAGE_SCHEME,
  TGLANG_LANGUAGE_SHELL,
  TGLANG_LANGUAGE_SMALLTALK,
  TGLANG_LANGUAGE_SOLIDITY,
  TGLANG_LANGUAGE_SQL,
  TGLANG_LANGUAGE_SWIFT,
  TGLANG_LANGUAGE_TCL,
  TGLANG_LANGUAGE_TEXTILE,
  TGLANG_LANGUAGE_TL,
  TGLANG_LANGUAGE_TYPESCRIPT,
  TGLANG_LANGUAGE_UNREALSCRIPT,
  TGLANG_LANGUAGE_VALA,
  TGLANG_LANGUAGE_VBSCRIPT,
  TGLANG_LANGUAGE_VERILOG,
  TGLANG_LANGUAGE_VISUAL_BASIC,
  TGLANG_LANGUAGE_WOLFRAM,
  TGLANG_LANGUAGE_XML,
  TGLANG_LANGUAGE_YAML
};

extern TAnnotator annotator;

/**
 * Detects programming language of a code snippet.
 * \param[in] text Text of a code snippet. A null-terminated string in UTF-8 encoding.
 * \return detected programming language.
 */
TGLANG_EXPORT enum TglangLanguage tglang_detect_programming_language(const char *text);

#ifdef __cplusplus
}
#endif

#endif
