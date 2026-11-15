	THUMB_FUNC_START sub_080C09FC
sub_080C09FC: @ 0x080C09FC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	str r1, [sp]
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #0
	mov r9, r0
	mov r7, #15
	ldr r6, _080C0A9C  @ =gRam
	mov r8, r6
	ldr r1, _080C0AA0  @ =0x00000E47
	add r0, r6, r1
	add r0, r0, r5
	mov r10, r0
_080C0A20:
	ldr r0, _080C0AA4  @ =0x00000E15
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r4, r7, #24
	cmp r0, #9
	beq _080C0A4C
	cmp r0, #31
	beq _080C0A4C
	asr r2, r4, #24
	ldr r0, _080C0AA8  @ =0x00000996
	add r0, r0, r8
	ldrb r0, [r0]
	eor r0, r0, r2
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080C0AAC  @ =gUnknown_03003302
	add r2, r2, r1
	ldrb r1, [r2]
	orr r0, r0, r1
	cmp r0, #0
	bne _080C0AC0
_080C0A4C:
	add r3, r6, #0
	asr r2, r4, #24
	ldr r1, _080C0AB0  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080C0AC0
	ldr r1, _080C0AB4  @ =gUnknown_030030A5
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C0A76
	ldr r1, _080C0AB8  @ =0x00000A74
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C0AC0
_080C0A76:
	ldr r1, _080C0ABC  @ =0x000010F2
	add r0, r6, r1
	add r0, r2, r0
	mov r2, r10
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080C0AC0
	lsr r1, r4, #24
	add r0, r5, #0
	bl sub_080C0AE8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C0AC0
	mov r0, #1
	mov r9, r0
	b _080C0ACC
	.byte 0x00
	.byte 0x00
_080C0A9C:
	.4byte gRam
_080C0AA0:
	.4byte 0x00000E47
_080C0AA4:
	.4byte 0x00000E15
_080C0AA8:
	.4byte 0x00000996
_080C0AAC:
	.4byte gUnknown_03003302
_080C0AB0:
	.4byte 0x00000FA2
_080C0AB4:
	.4byte gUnknown_030030A5
_080C0AB8:
	.4byte 0x00000A74
_080C0ABC:
	.4byte 0x000010F2
_080C0AC0:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r4, r1
	lsr r7, r0, #24
	cmp r0, #0
	bge _080C0A20
_080C0ACC:
	ldr r2, [sp]
	cmp r2, #0
	beq _080C0AD4
	strb r7, [r2]
_080C0AD4:
	mov r0, r9
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C09FC

	.byte 0x00
	.byte 0x00
