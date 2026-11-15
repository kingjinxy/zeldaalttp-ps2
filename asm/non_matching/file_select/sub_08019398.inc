	THUMB_FUNC_START sub_08019398
sub_08019398: @ 0x08019398
	push {r4,lr}
	add r4, r0, #0
	add r3, r4, #0
	add r3, r3, #42
	ldrb r0, [r3]
	cmp r0, #2
	bne _080193DA
	add r2, r4, #0
	add r2, r2, #63
	mov r1, #0
	mov r0, #24
	strb r0, [r2]
	ldr r0, _0801940C  @ =gUnknown_08139AB0
	ldr r0, [r0]
	str r0, [r4, #72]
	strb r1, [r3]
	add r0, r4, #0
	bl 0x08003870
	add r0, r4, #0
	bl 0x08003BCC
	ldr r3, [r4, #120]
	ldrb r2, [r3, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3, #28]
	ldr r2, [r4, #124]
	ldrb r0, [r2, #28]
	and r1, r1, r0
	strb r1, [r2, #28]
_080193DA:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080193F8
	mov r0, #30
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_080193F8:
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801940C:
	.4byte gUnknown_08139AB0
	THUMB_FUNC_END sub_08019398

