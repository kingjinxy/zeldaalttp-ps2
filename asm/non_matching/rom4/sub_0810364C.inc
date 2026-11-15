	THUMB_FUNC_START sub_0810364C
sub_0810364C: @ 0x0810364C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #223
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _081036C4
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _081036CC  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
	ldr r3, _081036D0  @ =0x00000EE2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _081036D4  @ =0x00000F02
	add r0, r2, r1
	add r0, r4, r0
	ldr r3, _081036D8  @ =0x00000961
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _081036DC  @ =0x00001142
	add r0, r2, r1
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _081036E0  @ =0x00001152
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _081036E4  @ =0x00001172
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081036E8  @ =0x000010E2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #21
	strb r1, [r0]
	ldr r3, _081036EC  @ =0x00000D74
	add r2, r2, r3
	add r2, r4, r2
	mov r0, #127
	strb r0, [r2]
_081036C4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081036CC:
	.4byte gRam
_081036D0:
	.4byte 0x00000EE2
_081036D4:
	.4byte 0x00000F02
_081036D8:
	.4byte 0x00000961
_081036DC:
	.4byte 0x00001142
_081036E0:
	.4byte 0x00001152
_081036E4:
	.4byte 0x00001172
_081036E8:
	.4byte 0x000010E2
_081036EC:
	.4byte 0x00000D74
	THUMB_FUNC_END sub_0810364C

