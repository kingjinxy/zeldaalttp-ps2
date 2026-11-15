	THUMB_FUNC_START sub_0801D380
sub_0801D380: @ 0x0801D380
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r5, #3
	strb r5, [r4, #20]
	mov r0, #31
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #43
	strb r1, [r0]
	bl 0x0800099C
	ldr r1, _0801D3BC  @ =gUnknown_0813A7EE
	and r0, r0, r5
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801D3BC:
	.4byte gUnknown_0813A7EE
	THUMB_FUNC_END sub_0801D380

