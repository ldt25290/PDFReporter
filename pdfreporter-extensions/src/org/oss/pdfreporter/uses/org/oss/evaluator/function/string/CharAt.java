/**
 * Copyright [2015] [Open Software Solutions GmbH]
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 		http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
package org.oss.pdfreporter.uses.org.oss.evaluator.function.string;

import org.oss.pdfreporter.uses.org.oss.evaluator.function.FunctionArgument;
import org.oss.pdfreporter.uses.org.oss.evaluator.function.impl.FunctionArgumentFactory;

/**
 * The java.lang.String.charAt() method returns the char value at the specified index.
 * An index ranges from 0 to length() - 1.
 * The first char value of the sequence is at index 0, the next at index 1, and so on, as for array indexing.
 *
 */
public class CharAt extends AbstractStringOperatorAssociativityLeftTwoArg {

	public CharAt() {
		super("charAt", Precedence.USERFUNCTION);

	}

	@Override
	public boolean isUserFunction() {
		return true;
	}


	/* This method returns the char value at the specified index of this string. The first char value is at index 0.
	 * @see org.oss.evaluator.function.string.AbstractStringOperatorAssociativityLeftTwoArg#execute(org.oss.evaluator.function.FunctionArgument, org.oss.evaluator.function.FunctionArgument)
	 */
	@Override
	protected FunctionArgument<?> execute(FunctionArgument<?> a,FunctionArgument<?> b) throws IllegalArgumentException {

		if (a.getType()==FunctionArgument.ArgumentType.STRING && b.getType()==FunctionArgument.ArgumentType.INTEGER) {
			String string = (String) a.getValue();
			Integer index = (Integer) b.getValue();
			return FunctionArgumentFactory.createString(string.charAt(index));
		}
		throw new IllegalArgumentException(String.format("only first argument string as type and second argument integer as type are supported and not ", a.getType(), b.getType()));

	}
}