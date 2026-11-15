	THUMB_FUNC_START sub_080DD974
sub_080DD974: @ 0x080DD974
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080DDA70
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080DD9CC
	ldr r5, _080DD9D4  @ =gRam
	ldr r1, _080DD9D8  @ =0x00001132
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DD9B6
	bl sub_080AF16C
	ldr r2, _080DD9DC  @ =0x00001719
	add r0, r5, r2
	strb r6, [r0]
	bl sub_08093078
_080DD9B6:
	ldr r1, _080DD9E0  @ =gUnknown_08176230
	ldr r2, _080DD9E4  @ =0x00000F52
	add r0, r5, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r7, #0
	bl _call_via_r1
_080DD9CC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD9D4:
	.4byte gRam
_080DD9D8:
	.4byte 0x00001132
_080DD9DC:
	.4byte 0x00001719
_080DD9E0:
	.4byte gUnknown_08176230
_080DD9E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DD974

