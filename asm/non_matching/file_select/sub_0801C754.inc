	THUMB_FUNC_START sub_0801C754
sub_0801C754: @ 0x0801C754
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _0801C77C  @ =gUnknown_0813A658
	ldrb r0, [r4, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	ldrb r0, [r4, #21]
	cmp r0, #1
	bhi _0801C774
	add r0, r4, #0
	bl sub_0801CA04
_0801C774:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801C77C:
	.4byte gUnknown_0813A658
	THUMB_FUNC_END sub_0801C754

