	THUMB_FUNC_START sub_0810F51C
sub_0810F51C: @ 0x0810F51C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0810F548  @ =0x00000179
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810F540
	ldr r1, _0810F54C  @ =gRam
	ldr r0, _0810F550  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810F540:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F548:
	.4byte 0x00000179
_0810F54C:
	.4byte gRam
_0810F550:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F51C

