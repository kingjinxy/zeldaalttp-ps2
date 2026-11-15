	THUMB_FUNC_START sub_080D68C8
sub_080D68C8: @ 0x080D68C8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r7, _080D694C  @ =gRam
	ldr r0, _080D6950  @ =0x000010A2
	add r0, r0, r7
	mov r9, r0
	add r6, r5, r0
	ldrb r0, [r6]
	add r0, r0, #1
	mov r1, #0
	strb r0, [r6]
	ldr r2, _080D6954  @ =0x00000FC2
	add r2, r2, r7
	mov r8, r2
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080D6958  @ =0x00000F92
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C3758
	mov r0, #100
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080D693E
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	mov r2, r8
	add r1, r4, r2
	mov r0, #96
	strb r0, [r1]
	ldr r1, _080D695C  @ =0x00001082
	add r0, r7, r1
	add r0, r5, r0
	strb r4, [r0]
	mov r2, r9
	add r1, r4, r2
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r0, _080D6960  @ =0x00001122
	add r1, r7, r0
	add r1, r4, r1
	ldr r2, _080D6964  @ =gUnknown_081754FC
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080D693E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D694C:
	.4byte gRam
_080D6950:
	.4byte 0x000010A2
_080D6954:
	.4byte 0x00000FC2
_080D6958:
	.4byte 0x00000F92
_080D695C:
	.4byte 0x00001082
_080D6960:
	.4byte 0x00001122
_080D6964:
	.4byte gUnknown_081754FC
	THUMB_FUNC_END sub_080D68C8

