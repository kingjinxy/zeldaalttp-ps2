	THUMB_FUNC_START sub_080F723C
sub_080F723C: @ 0x080F723C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F7260
	add r0, r4, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F72BC
_080F7260:
	add r0, r4, #0
	mov r1, #44
	bl sub_080CF140
	ldr r5, _080F72C8  @ =gRam
	ldr r0, _080F72CC  @ =0x00000FC2
	add r7, r5, r0
	add r0, r4, r7
	mov r6, #16
	strb r6, [r0]
	add r0, r4, #0
	bl sub_080E2614
	mov r0, #97
	add r1, r4, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080F72B2
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	add r0, r4, r7
	strb r6, [r0]
	ldr r1, _080F72D0  @ =0x00001012
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080F72D4  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080F72D8  @ =0x00001032
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_080F72B2:
	ldr r1, _080F72DC  @ =0x00000EF2
	add r0, r5, r1
	add r0, r0, r8
	mov r1, #128
	strb r1, [r0]
_080F72BC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F72C8:
	.4byte gRam
_080F72CC:
	.4byte 0x00000FC2
_080F72D0:
	.4byte 0x00001012
_080F72D4:
	.4byte 0x00000F82
_080F72D8:
	.4byte 0x00001032
_080F72DC:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_080F723C

