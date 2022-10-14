// This file is part of the Luau programming language and is licensed under MIT License; see LICENSE.txt for details
// This file was generated by 'tools/lvmexecute_split.py' script, do not modify it by hand
#pragma once

#include <stdint.h>

struct lua_State;
struct Closure;
typedef uint32_t Instruction;
typedef struct lua_TValue TValue;
typedef TValue* StkId;

const Instruction* execute_LOP_NOP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LOADNIL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LOADB(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LOADN(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LOADK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MOVE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETGLOBAL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETGLOBAL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETUPVAL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETUPVAL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_CLOSEUPVALS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETIMPORT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETTABLEKS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETTABLEKS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETTABLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETTABLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETTABLEN(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETTABLEN(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_NEWCLOSURE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_NAMECALL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_CALL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_RETURN(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIF(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFNOT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFEQ(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFNOTEQ(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFNOTLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFLT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPIFNOTLT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_ADD(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SUB(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MUL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DIV(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MOD(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_POW(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_ADDK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SUBK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MULK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DIVK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MODK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_POWK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_AND(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_OR(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_ANDK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_ORK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_CONCAT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_NOT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_MINUS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LENGTH(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_NEWTABLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DUPTABLE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_SETLIST(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORNPREP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORNLOOP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORGPREP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORGLOOP(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORGPREP_INEXT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DEP_FORGLOOP_INEXT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FORGPREP_NEXT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DEP_FORGLOOP_NEXT(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_GETVARARGS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DUPCLOSURE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_PREPVARARGS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPBACK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_LOADKX(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPX(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FASTCALL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_COVERAGE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_CAPTURE(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DEP_JUMPIFEQK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_DEP_JUMPIFNOTEQK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FASTCALL1(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FASTCALL2(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_FASTCALL2K(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_BREAK(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPXEQKNIL(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPXEQKB(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPXEQKN(lua_State* L, const Instruction* pc, StkId base, TValue* k);
const Instruction* execute_LOP_JUMPXEQKS(lua_State* L, const Instruction* pc, StkId base, TValue* k);
