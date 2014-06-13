--[[
Copyright (C) 2008-2014 Vana Development Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2
of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
--]]
-- A subset of Lua functions that helps with common quiz text patterns

dofile("scripts/lua_functions/npcHelper.lua");

answer_correct = 1;
answer_incorrect = 0;
questionRecord = {};

function makeQuizQuestion(question, correctAnswerIndex, answers)
	return {question, correctAnswerIndex, answers};
end

function askQuizQuestion(questions, prefix)
	questionId = nil;
	repeat
		questionId = getRandomNumber(#questions);
	until questionRecord[questionId] == nil

	if prefix ~= nil then
		addText(prefix);
	end
	question = questions[questionId];
	addText(question[1] .. " \r\n");
	addText(blue(choiceRef(question[3])));
	choice = askChoice();

	if choice == (question[2] - 1) then
		questionRecord[questionId] = true
		return answer_correct;
	end

	return answer_incorrect;
end