	THUMB_FUNC_START sub_080473AC
sub_080473AC: @ 0x080473AC
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08047678
	add r4, r0, #0
	bl sub_0800099C
	lsl r2, r4, #24
	lsr r1, r2, #24
	add r2, r1, #0
	lsl r4, r2, #2
	mov r1, #3
	bl __umodsi3
	add r1, r4, r0
	ldr r0, _080473EC  @ =gUnknown_0813F11C
	add r1, r0, r1
	str r1, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strh r1, [r0]
_080473DE:
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	cmp r1, #7
	bls _080473F0
	b _08047488
	.byte 0x00
	.byte 0x00
_080473EC:
	.4byte gUnknown_0813F11C
_080473F0:
	mov r0, #16
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08047472
	ldr r4, [r7, #4]
	ldr r0, [r7, #8]
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	add r1, r2, #0
	bl 0x08000AAC
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08047434
	bl sub_0800099C
	ldr r1, _08047430  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	bl __umodsi3
	add r1, r0, #0
	add r0, r1, #0
	add r1, r0, #1
	add r0, r1, #0
	b _08047436
	.byte 0x00
	.byte 0x00
_08047430:
	.4byte gUnknown_03006C80
_08047434:
	mov r0, #0
_08047436:
	ldrb r1, [r4, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	orr r0, r0, r2
	add r1, r0, #0
	strb r1, [r4, #10]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #12
	ldrh r3, [r1]
	add r2, r3, #0
	lsl r1, r2, #5
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_08047472:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _080473DE
_08047488:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080473AC

