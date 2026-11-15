	THUMB_FUNC_START sub_080F22F4
sub_080F22F4: @ 0x080F22F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r7, _080F237C  @ =gRam
	ldr r1, _080F2380  @ =0x00000FC2
	add r0, r7, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080F2390
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F23EE
	ldr r2, _080F2384  @ =0x00001122
	add r0, r7, r2
	add r5, r4, r0
	ldrb r0, [r5]
	mov r1, #63
	mov r8, r1
	mov r2, r8
	and r2, r2, r0
	ldr r3, _080F2388  @ =gUnknown_08179254
	ldr r1, _080F238C  @ =0x00000996
	add r0, r7, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r5]
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F2364
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F23EE
_080F2364:
	mov r0, #127
	strb r0, [r6]
	ldrb r1, [r5]
	mov r0, r8
	and r0, r0, r1
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #37
	bl sub_080CF0AC
	b _080F23EE
	.byte 0x00
	.byte 0x00
_080F237C:
	.4byte gRam
_080F2380:
	.4byte 0x00000FC2
_080F2384:
	.4byte 0x00001122
_080F2388:
	.4byte gUnknown_08179254
_080F238C:
	.4byte 0x00000996
_080F2390:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F23AA
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F23B2
_080F23AA:
	ldrb r0, [r6]
	add r2, r7, #0
	cmp r0, #1
	bne _080F23C0
_080F23B2:
	ldr r0, _080F23FC  @ =gRam
	ldr r2, _080F2400  @ =0x00000FA2
	add r1, r0, r2
	add r1, r4, r1
	mov r2, #0
	strb r2, [r1]
	add r2, r0, #0
_080F23C0:
	ldr r1, _080F2404  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	sub r1, r1, #48
	add r2, r2, r1
	add r2, r4, r2
	ldr r1, _080F2408  @ =gUnknown_081791D4
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldrb r1, [r2]
	lsl r1, r1, #4
	ldr r0, _080F240C  @ =gUnknown_081791F4
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C4F98
_080F23EE:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F23FC:
	.4byte gRam
_080F2400:
	.4byte 0x00000FA2
_080F2404:
	.4byte 0x00000FC2
_080F2408:
	.4byte gUnknown_081791D4
_080F240C:
	.4byte gUnknown_081791F4
	THUMB_FUNC_END sub_080F22F4

