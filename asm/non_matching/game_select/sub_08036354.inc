	THUMB_FUNC_START sub_08036354
sub_08036354: @ 0x08036354
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _08036390  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0803636A
	add r0, r4, #0
	bl sub_080363D8
_0803636A:
	add r1, r4, #0
	add r1, r1, #114
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803638A
	mov r0, #180
	lsl r0, r0, #2
	strh r0, [r1]
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08036424
_0803638A:
	pop {r4}
	pop {r0}
	bx r0
_08036390:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_08036354

