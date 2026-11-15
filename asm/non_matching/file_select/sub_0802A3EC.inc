	THUMB_FUNC_START sub_0802A3EC
sub_0802A3EC: @ 0x0802A3EC
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_0802A4EC
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r2, [r4, #11]
	add r0, r2, #2
	cmp r5, r0
	blt _0802A448
	ldr r0, _0802A440  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0802A444  @ =gUnknown_08137B10
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	mov r1, #0
	mov r0, #2
	strb r0, [r4, #20]
	strb r1, [r4, #24]
	strh r1, [r4, #58]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #4
	bl 0x08003870
	mov r0, #113
	bl 0x08003DFC
	b _0802A48A
	.byte 0x00
	.byte 0x00
_0802A440:
	.4byte gUnknown_0201F000
_0802A444:
	.4byte gUnknown_08137B10
_0802A448:
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r5, r1
	bls _0802A47C
	add r0, r2, #1
	cmp r0, r5
	bne _0802A46C
	mov r0, #4
	strb r0, [r4, #24]
	add r1, r5, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _0802A474
_0802A46C:
	add r0, r4, #0
	add r1, r5, #0
	bl 0x08003870
_0802A474:
	mov r0, #18
	bl 0x08003DFC
	b _0802A488
_0802A47C:
	cmp r5, r1
	bcs _0802A488
	add r0, r4, #0
	add r1, r5, #0
	bl 0x08003870
_0802A488:
	strb r5, [r6]
_0802A48A:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802A3EC

