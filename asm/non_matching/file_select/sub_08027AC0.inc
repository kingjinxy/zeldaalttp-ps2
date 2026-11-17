	THUMB_FUNC_START sub_08027AC0
sub_08027AC0: @ 0x08027AC0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08027B16
	mov r2, #3
	mov r0, #3
	strb r0, [r4, #20]
	ldrb r0, [r4, #23]
	strb r0, [r4, #24]
	ldr r1, _08027B1C  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r4, #96]
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #118
	strh r0, [r1]
	sub r1, r1, #76
	add r0, r4, #0
	add r0, r0, #120
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	and r0, r0, r2
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
	add r0, r4, #0
	bl sub_08027BCC
	mov r0, #87
	bl sub_08003DFC
_08027B16:
	pop {r4}
	pop {r0}
	bx r0
_08027B1C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08027AC0

