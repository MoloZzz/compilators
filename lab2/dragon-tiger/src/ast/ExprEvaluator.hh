#ifndef COMPILERS_LABS_EXPR_EVALUATOR_H
#define COMPILERS_LABS_EXPR_EVALUATOR_H

#include "nodes.hh"
#include "../utils/errors.hh"

namespace ast {
    class ExprEvaluator : public ConstASTIntVisitor {
    public:
        ExprEvaluator() = default;
        ~ExprEvaluator() = default;

        int32_t visit(const IntegerLiteral &integerLiteral) override {
            return integerLiteral.value;
        }

        int32_t visit(const class BinaryOperator &binaryOperator) override {
            int32_t left_val = binaryOperator.get_left().accept(*this);
            int32_t right_val = binaryOperator.get_right().accept(*this);
            switch (binaryOperator.op)
            {
                case o_plus:
                    return left_val + right_val;
                case o_minus:
                    return left_val - right_val;
                case o_times:
                    return left_val * right_val;
                case o_divide:
                    return left_val / right_val;
                case o_eq:
                    return left_val == right_val;
                case o_neq:
                    return left_val != right_val;
                case o_lt:
                    return left_val < right_val;
                case o_gt:
                    return left_val > right_val;
                case o_le:
                    return left_val <= right_val;
                case o_ge:
                    return left_val >= right_val;
                default:
                    utils::error("Unknown binary operator");
            }
        }

        int32_t visit(const class Sequence & sequence) {
            int32_t result = 0;
            for (const auto &expr : sequence.get_exprs()) {
                result = expr->accept(*this);
            }
            return result;
        }

        int32_t visit(const class IfThenElse & ifThenElse) {
            int32_t condition = ifThenElse.get_condition().accept(*this);
            if (condition) {
                return ifThenElse.get_then_part().accept(*this);
            } else {
                return ifThenElse.get_else_part().accept(*this);
            }
        }

        int32_t visit(const class StringLiteral &) {
            utils::error("Cannot evaluate string literals");
        }

        int32_t visit(const class Let &) {
            utils::error("Cannot evaluate let expressions");
        }

        int32_t visit(const class Identifier &) {
            utils::error("Cannot evaluate identifiers");
        }

        int32_t visit(const class VarDecl &) {
            utils::error("Cannot evaluate variable declarations");
        }

        int32_t visit(const class FunDecl &) {
            utils::error("Cannot evaluate function declarations");
        }

        int32_t visit(const class FunCall &) {
            utils::error("Cannot evaluate function calls");
        }

        int32_t visit(const class WhileLoop &) {
            utils::error("Cannot evaluate while loops");
        }

        int32_t visit(const class ForLoop &) {
            utils::error("Cannot evaluate for loops");
        }
        int32_t visit(const class Break &) {
            utils::error("Cannot evaluate break statements");
        }

        int32_t visit(const class Assign &) {
            utils::error("Cannot evaluate assignments");
        }
    };
}

#endif
