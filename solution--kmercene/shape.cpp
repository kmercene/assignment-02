/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 YOUR_NAME <YOUR_EMAIL>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Implements `shape.h`.
 */

// TODO: `#include`s for system headers, if necessary
#include "shape.h"

// TODO: `#include`s for other local headers, if necessary

// ----------------------------------------------------------------------------

// TODO: implementations for all functions in `class Shape`

Shape::Shape(const std::string & type = "empty") {
	int type_;
	int type_art_;
	setType();
}
        /**
         * The constructor.
         *
         * Must initialize `type_`, and `type_art_`.
         *
         * Notes:
         * - I suggest calling `setType` in the body of the constructor, to
         *   avoid duplicating code.
         */

Shape::~Shape(){
	Shape::~Shape() = default;
}
        /**
         * The destructor.
         *
         * Since there's no dynamically allocated memory to `delete`, this may
         * be left out, or it may be implemented with
         * ```
         * Shape::~Shape() = default;
         * ```
         * (valid since C++ 11).
         */


		std::string getType(){
			return type_;
		}
        /**
         * Return `type_`.
         */

		void Shape::setType(const std::string & type){
			type_ = type;
			if (!= type){
				cerr << "ERROR: `Shape::setType`: invalid type\n";
				exit(1);
			}
		}
        /**
         * Set `type_` to `type`, and set `type_art_` to the appropriate value.
         *
         * If the passed `type` is not valid, write
         * ```
         * "ERROR: `Shape::setType`: invalid type\n"
         * ```
         * to `cerr` and `exit(1)`.
         */


		void Shape::drawToBuffer(Buffer & b, unsigned int x, unsigned int y) const {
			cerr << type_art_;
		}
        /**
         * Draw `type_art_` onto the `Buffer` at position `x, y`.
         *
         * Notes:
         * - This (primarily) is what 
         *   ```
         *   void Buffer::set(unsigned int, unsigned int, std::string);
         *   ```
         *   is for.
         */


		bool isHappy(const Neighborhood & n,
			unsigned int x,
			unsigned int y) const {
				if (shape >= 0, neighbors >= RATIO_ALIKE_HAPPY)
					return true;
		}
        /**
         * Return `true` if the shape is happy (i.e. not willing to move), and
         * `false` otherwise.
         *
         * - More specifically, return `true` if and only if the shape
         *     - has more than 0 "triangle" or "square" neighbors
         *     - and the ratio of like neighbors to unlike (different)
         *       neighbors is greater than or equal to `RATIO_ALIKE_HAPPY`
         *       (from `constants.h`)
         *     - and the ratio of unlike (different) neighbors to like
         *       neighbors is greater than or equal to `RATIO_DIFFERENT_HAPPY`
         *       (from `constants.h`)
         *
         * Notes:
         * - Use `n.get(...).getType() == "..."` to determine the type of the
         *   `Shape` at a given position.
         * - Be careful not to look for neighbors outside the bounds of the
         *   `Neighborhood`.
         * - Be careful not to have a shape count itself, when trying to count
         *   its neighbors.
         * - Be careful not to count "empty" shapes as unlike (different)
         *   shapes ("empty" shapes should not count as either like or
         *   unlike).
         * - Be careful of possible division by 0 when testing the ratios of
         *   like and unlike shapes.
         */