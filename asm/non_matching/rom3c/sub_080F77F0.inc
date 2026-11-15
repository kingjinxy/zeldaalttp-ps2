	THUMB_FUNC_START sub_080F77F0
sub_080F77F0: @ 0x080F77F0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F7834  @ =gRam
	ldr r1, _080F7838  @ =0x00000FC2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r3, [r4]
	cmp r3, #0
	beq _080F784C
	cmp r3, #191
	bhi _080F7886
	cmp r3, #191
	bne _080F7814
	ldr r2, _080F783C  @ =0x00000A3E
	add r1, r6, r2
	mov r0, #5
	strb r0, [r1]
_080F7814:
	ldr r2, _080F7840  @ =gUnknown_08179C40
	ldrb r1, [r4]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r2, _080F7844  @ =0x00000A28
	add r0, r6, r2
	strh r1, [r0]
	ldr r1, _080F7848  @ =0x00001770
	add r0, r6, r1
	strb r3, [r0]
	b _080F7886
	.byte 0x00
	.byte 0x00
_080F7834:
	.4byte gRam
_080F7838:
	.4byte 0x00000FC2
_080F783C:
	.4byte 0x00000A3E
_080F7840:
	.4byte gUnknown_08179C40
_080F7844:
	.4byte 0x00000A28
_080F7848:
	.4byte 0x00001770
_080F784C:
	ldr r2, _080F788C  @ =0x00000F52
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #255
	strb r0, [r4]
	ldr r1, _080F7890  @ =0x00000A28
	add r0, r6, r1
	mov r2, #0
	strh r3, [r0]
	ldr r0, _080F7894  @ =0x00000A3E
	add r1, r6, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r1, _080F7898  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080F789C  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080F7BDC
_080F7886:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F788C:
	.4byte 0x00000F52
_080F7890:
	.4byte 0x00000A28
_080F7894:
	.4byte 0x00000A3E
_080F7898:
	.4byte 0x00001152
_080F789C:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F77F0

