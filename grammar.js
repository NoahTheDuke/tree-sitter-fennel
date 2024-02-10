const SYMBOL = /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/;

module.exports = grammar({
	name: "fennel",

	rules: {
		source: $ => repeat($._form),
		_ws: $ => / \t\f\r\n\v/,
		comment: $ => token(/;.*/),

		_form: $ => choice(
			$.nil,
			$.boolean,
			$.number,
			$.string,
			$.symbol,
			$.colon_string,
			$.list,
			$.table,
			$.seq_table,
		),

		nil: $ => token("nil"),

		boolean: $ => token(choice("true", "false")),

		// Adapted from https://github.com/TravonteD/tree-sitter-fennel
		number: $ => {
			const sign = choice('-', '+');
			const digits = /\d[_\d]*/;
			const exponent = seq(choice('e', 'E'), optional(sign), digits);
			const decimal_literal = seq(
				optional(sign),
				choice(
					digits,
					seq('.', digits),
					seq(digits, '.', optional(digits)),
				),
				optional(exponent),
			);
			const hex_digits = /[a-fA-F\d][_a-fA-F\d]*/;
			const hex_exponent = seq(choice('p', 'P'), optional(sign), hex_digits);
			const hexadecimal_literal = seq(
				optional(sign),
				choice('0x', '0X'),
				choice(
					hex_digits,
					seq('.', hex_digits),
					seq(hex_digits, '.', optional(hex_digits)),
				),
				optional(hex_exponent),
			);
			return token(choice(
				decimal_literal,
				hexadecimal_literal,
			));
		},

		// Adapted from https://github.com/TravonteD/tree-sitter-fennel
		string: $ => {
			const escape_sequence = token.immediate(seq(
				"\\",
				choice(
					/[^xu\d]/,
					/\d{1,3}/,
					/x[\da-fA-F]{2}/,
					/u{[\da-fA-F]+}/,
				),
			));
			return seq(
				'"',
				repeat(choice(
					token.immediate(prec(1, /[^"\\]+/)),
					escape_sequence,
				)),
				'"',
			)
		},

		// Adapted from the reference:
		// Symbols may be any unicode character, except:
		// * not begin with digits or a colon
		// * not unprintable or whitespace
		// * not a delimiter character: /(/, /)/, /{/, /}/, /[/, /]/
		// * not a reserved character: /'/, /~/, /;/, /@/
		// * not a prefix character: /#/, /`/, /,/
		symbol: $ => choice(
			':',
			/[^0-9:\s\t\f\r\n\v(){}\[\]'~;@#`,][^:\s\t\f\r\n\v(){}\[\]'~;@#`,]*/
		),

		// Fennel also supports certain kinds of strings that begin with a colon as long
		// as they don't contain any characters which wouldn't be allowed in a symbol
		colon_string: $ => seq(":", SYMBOL),

		list: $ => seq(
			field("open", "("),
			repeat(field('value', $._form)),
			field("close", ")")
		),

		table: $ => seq(
			field("open", "{"),
			repeat(field('value', $._form)),
			field("close", "}")
		),

		seq_table: $ => seq(
			field("open", "["),
			repeat(field('value', $._form)),
			field("close", "]")
		),

	}
});
