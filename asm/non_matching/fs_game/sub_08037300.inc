	THUMB_FUNC_START sub_08037300
sub_08037300: @ 0x08037300
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	mov r0, #1
	str r0, [r7]
	ldr r0, _08037320  @ =gUnknown_03000494
	ldr r1, [r0]
	sub r0, r1, #2
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #15
	bls _08037328
_0803731C:
	b _08037326
	.byte 0x00
	.byte 0x00
_08037320:
	.4byte gUnknown_03000494
	.byte 0x00
	.byte 0xE0
_08037326:
	b _0803731C
_08037328:
	ldr r0, _080373F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08037354
	ldr r0, _080373F4  @ =gUnknown_0200B1D0
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #192
	lsl r0, r0, #8
	cmp r1, r0
	bne _08037354
	mov r0, #0
	str r0, [r7]
_08037354:
	ldr r0, _080373F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08037382
	ldr r0, _080373F4  @ =gUnknown_0200B1D0
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #1
	add r0, r0, #32
	add r1, r0, r1
	ldrh r0, [r1]
	mov r1, #192
	lsl r1, r1, #8
	cmp r0, r1
	bne _08037382
	mov r0, #0
	str r0, [r7]
_08037382:
	ldr r0, _080373F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080373B2
	ldr r0, _080373F4  @ =gUnknown_0200B1D0
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r0, r0, #64
	add r1, r0, r1
	ldrh r0, [r1]
	mov r1, #192
	lsl r1, r1, #8
	cmp r0, r1
	bne _080373B2
	mov r0, #0
	str r0, [r7]
_080373B2:
	ldr r0, _080373F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080373E2
	ldr r0, _080373F4  @ =gUnknown_0200B1D0
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r0, r0, #96
	add r1, r0, r1
	ldrh r0, [r1]
	mov r1, #192
	lsl r1, r1, #8
	cmp r0, r1
	bne _080373E2
	mov r0, #0
	str r0, [r7]
_080373E2:
	ldr r0, [r7]
	cmp r0, #0
	beq _080373F8
	ldr r0, _080373F0  @ =gUnknown_03000FC0
	mov r1, #2
	str r1, [r0, #8]
	b _08037402
_080373F0:
	.4byte gUnknown_03000FC0
_080373F4:
	.4byte gUnknown_0200B1D0
_080373F8:
	ldr r0, _0803740C  @ =gUnknown_03000FE4
	ldr r1, _08037410  @ =gUnknown_03000FD0
	mov r2, #10
	bl CpuSet
_08037402:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803740C:
	.4byte gUnknown_03000FE4
_08037410:
	.4byte gUnknown_03000FD0
	THUMB_FUNC_END sub_08037300

