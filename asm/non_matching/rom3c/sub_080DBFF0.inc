	THUMB_FUNC_START sub_080DBFF0
sub_080DBFF0: @ 0x080DBFF0
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DC09C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC040
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C90F4
	ldr r1, _080DC048  @ =0x00000175
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC040
	ldr r2, _080DC04C  @ =gRam
	ldr r1, _080DC050  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DC054  @ =0x00001082
	add r2, r2, r0
	add r2, r4, r2
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
_080DC040:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080DC048:
	.4byte 0x00000175
_080DC04C:
	.4byte gRam
_080DC050:
	.4byte 0x00000FB2
_080DC054:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080DBFF0

