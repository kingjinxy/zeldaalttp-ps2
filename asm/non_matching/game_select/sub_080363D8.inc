	THUMB_FUNC_START sub_080363D8
sub_080363D8: @ 0x080363D8
	push {r4,lr}
	mov r0, #49
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _08036418
	bl sub_080364EC
	strb r0, [r4, #10]
	bl sub_0800099C
	mov r1, #62
	and r0, r0, r1
	ldr r2, _08036420  @ =gUnknown_0813DFC0
	lsl r1, r0, #1
	add r1, r1, r2
	ldrh r1, [r1]
	strh r1, [r4, #50]
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #255
	strb r0, [r1]
	add r1, r1, #37
	mov r0, #128
	lsl r0, r0, #7
	strh r0, [r1]
_08036418:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036420:
	.4byte gUnknown_0813DFC0
	THUMB_FUNC_END sub_080363D8

