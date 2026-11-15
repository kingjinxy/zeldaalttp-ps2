	THUMB_FUNC_START sub_0808B1FC
sub_0808B1FC: @ 0x0808B1FC
	ldr r0, _0808B320  @ =gRam
	ldr r2, _0808B324  @ =0x00000952
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _0808B328  @ =0x00001A58
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B32C  @ =0x00000958
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B330  @ =0x000016C4
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B334  @ =0x00000B74
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B338  @ =0x00000B78
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B33C  @ =0x00000B7C
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #184
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B340  @ =0x00000B84
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B344  @ =0x00000B86
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B348  @ =0x00000B88
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B34C  @ =0x00000B8A
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0808B350  @ =0x00000B8C
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #185
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #158
	lsl r2, r2, #4
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B354  @ =0x000009E1
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B358  @ =0x000009E3
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B35C  @ =0x000009E4
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B360  @ =0x000016D5
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #7
	add r1, r0, r3
	strb r2, [r1]
	mov r2, #161
	lsl r2, r2, #4
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B364  @ =0x00000B1E
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B368  @ =0x0000172C
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _0808B36C  @ =0x000009DE
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r3, #1
	add r0, r0, r3
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0808B320:
	.4byte gRam
_0808B324:
	.4byte 0x00000952
_0808B328:
	.4byte 0x00001A58
_0808B32C:
	.4byte 0x00000958
_0808B330:
	.4byte 0x000016C4
_0808B334:
	.4byte 0x00000B74
_0808B338:
	.4byte 0x00000B78
_0808B33C:
	.4byte 0x00000B7C
_0808B340:
	.4byte 0x00000B84
_0808B344:
	.4byte 0x00000B86
_0808B348:
	.4byte 0x00000B88
_0808B34C:
	.4byte 0x00000B8A
_0808B350:
	.4byte 0x00000B8C
_0808B354:
	.4byte 0x000009E1
_0808B358:
	.4byte 0x000009E3
_0808B35C:
	.4byte 0x000009E4
_0808B360:
	.4byte 0x000016D5
_0808B364:
	.4byte 0x00000B1E
_0808B368:
	.4byte 0x0000172C
_0808B36C:
	.4byte 0x000009DE
	THUMB_FUNC_END sub_0808B1FC

