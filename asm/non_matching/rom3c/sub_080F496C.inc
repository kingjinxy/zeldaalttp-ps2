	THUMB_FUNC_START sub_080F496C
sub_080F496C: @ 0x080F496C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #210
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F499E
	ldr r2, _080F49A8  @ =gRam
	ldr r1, _080F49AC  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F49B0  @ =0x00000FB2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
_080F499E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F49A8:
	.4byte gRam
_080F49AC:
	.4byte 0x00001082
_080F49B0:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080F496C

