	THUMB_FUNC_START sub_080AB94C
sub_080AB94C: @ 0x080AB94C
	push {r4-r7,lr}
	add r4, r2, #0
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r7, r1, #24
	mov r1, #0
	mov r2, #4
	ldr r3, _080AB998  @ =gRam
	ldr r0, _080AB99C  @ =0x00000E15
	add r5, r3, r0
_080AB962:
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #10
	bne _080AB970
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080AB970:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080AB962
	add r0, r6, #1
	cmp r1, r0
	beq _080AB9A4
	mov r1, #4
	ldr r2, _080AB9A0  @ =gUnknown_03003045
_080AB984:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AB9E0
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080AB984
	b _080AB9E0
_080AB998:
	.4byte gRam
_080AB99C:
	.4byte 0x00000E15
_080AB9A0:
	.4byte gUnknown_03003045
_080AB9A4:
	ldr r2, _080AB9D8  @ =0x0000185A
	add r1, r3, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AB9BC
_080AB9B4:
	ldr r5, _080AB9D8  @ =0x0000185A
	add r1, r3, r5
	mov r0, #4
	strb r0, [r1]
_080AB9BC:
	ldr r1, _080AB9D8  @ =0x0000185A
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080AB9DC  @ =0x00000E15
	add r0, r3, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #10
	beq _080AB9E0
	sub r0, r1, #1
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AB9A4
	b _080AB9B4
_080AB9D8:
	.4byte 0x0000185A
_080AB9DC:
	.4byte 0x00000E15
_080AB9E0:
	strb r1, [r4]
	lsl r0, r1, #24
	cmp r0, #0
	blt _080ABA70
	ldr r5, _080ABA54  @ =0x00000E15
	add r0, r3, r5
	add r0, r0, r1
	mov r2, #0
	strb r7, [r0]
	ldr r1, _080ABA58  @ =0x00000E47
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	mov r5, #161
	lsl r5, r5, #4
	add r1, r3, r5
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, #195
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	ldr r5, _080ABA5C  @ =0x00000B1E
	add r1, r3, r5
	ldrh r1, [r1]
	strb r1, [r0]
	ldr r1, _080ABA60  @ =0x00000DED
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	strb r2, [r0]
	add r1, r1, #10
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	strb r2, [r0]
	ldr r1, _080ABA64  @ =0x00000A74
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	strb r2, [r0]
	add r1, r1, #10
	add r0, r3, r1
	ldrb r5, [r4]
	add r0, r0, r5
	strb r2, [r0]
	ldr r0, _080ABA68  @ =0x00000E5B
	add r1, r3, r0
	ldrb r4, [r4]
	add r1, r1, r4
	ldr r2, _080ABA6C  @ =gUnknown_08226484
	sub r0, r7, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #0
	b _080ABA72
_080ABA54:
	.4byte 0x00000E15
_080ABA58:
	.4byte 0x00000E47
_080ABA5C:
	.4byte 0x00000B1E
_080ABA60:
	.4byte 0x00000DED
_080ABA64:
	.4byte 0x00000A74
_080ABA68:
	.4byte 0x00000E5B
_080ABA6C:
	.4byte gUnknown_08226484
_080ABA70:
	mov r0, #1
_080ABA72:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AB94C

