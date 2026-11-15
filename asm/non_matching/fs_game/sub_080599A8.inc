	THUMB_FUNC_START sub_080599A8
sub_080599A8: @ 0x080599A8
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	add r2, r0, #0
	lsl r1, r2, #2
	add r1, r1, r0
	lsl r0, r1, #2
	ldr r1, _080599E8  @ =gUnknown_08429004
	add r0, r1, r0
	str r0, [r7, #12]
	ldr r1, [r7, #4]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	mov r0, #58
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _080599F0
	ldr r0, [r7, #8]
	ldr r1, [r7]
	str r1, [r0, #84]
	ldr r0, _080599EC  @ =gUnknown_0202E1E4
	mov r1, #0
	str r1, [r0]
	b _080599F6
_080599E8:
	.4byte gUnknown_08429004
_080599EC:
	.4byte gUnknown_0202E1E4
_080599F0:
	ldr r0, _08059A24  @ =gUnknown_0202E1E4
	mov r1, #1
	str r1, [r0]
_080599F6:
	ldr r0, _08059A28  @ =gUnknown_03000520
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7, #12]
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	ldr r2, [r7, #12]
	add r1, r2, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	bl sub_0800C0B0
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
_08059A24:
	.4byte gUnknown_0202E1E4
_08059A28:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_080599A8

