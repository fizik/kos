const char *queueStr = R"(
{
"cmd": "auto",
"markers_screen":[{"id":"0","x":"1.0","y":"2.0"},{"id":"2","x":"1.0","y":"2.0"},{"id":"3","x":"1.0","y":"2.0"},{"id":"4","x":"1.0","y":"2.0"}],
"markers_floor":[{"id":"0","x":"1.0","y":"2.0"},{"id":"2","x":"1.0","y":"2.0"},{"id":"3","x":"1.0","y":"2.0"},{"id":"4","x":"1.0","y":"2.0"}],
"targets_screen":[{"id":"0","x":"1.0","y":"2.0"},{"id":"2","x":"1.0","y":"2.0"},{"id":"3","x":"1.0","y":"2.0"}],
"robot_screen":[{"id":"0","x":"1.0","y":"2.0"}]
}
)";

const char *cmdsStr[] = {
    R"({"cmd": "forward", "val": "1.0"})",
    R"({"cmd": "back", "val": "1.0"})",
    R"({"cmd": "left", "val": "0.5"})",
    R"({"cmd": "right", "val": "1.5"})",
    R"({"cmd": "stop"})"};