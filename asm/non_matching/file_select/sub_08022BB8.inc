	THUMB_FUNC_START sub_08022BB8
sub_08022BB8: @ 0x08022BB8
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800099C
	ldr r2, _08022C1C  @ =gUnknown_0813BD8A
	mov r1, #7
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	add r0, r4, #0
	add r0, r0, #112
	strh r1, [r0]
	ldr r2, _08022C20  @ =gUnknown_03006A30
	ldrb r1, [r4, #23]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl 0x08003F4C
	mov r1, #24
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #43
	strb r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r4, #12]
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r4, #16]
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08022C1C:
	.4byte gUnknown_0813BD8A
_08022C20:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08022BB8

