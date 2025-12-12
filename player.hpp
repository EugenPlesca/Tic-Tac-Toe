/**
 * @file player.hpp
 * @brief Definirea tipului Player
 * @author Eugen Plesca
 * @date 2025
 * @project Tic-Tac-Toe
 */

#pragma once

/**
 * @enum Player
 * @brief Reprezintă jucătorii din joc
 *
 * None – celulă liberă  
 * X – jucătorul X  
 * O – jucătorul O
 */
enum class Player {
    None,  /**< Celulă liberă */
    X,     /**< Jucătorul X */
    O      /**< Jucătorul O */
};
