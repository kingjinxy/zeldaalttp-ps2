	THUMB_FUNC_START sub_0801C0B4
sub_0801C0B4: @ 0x0801C0B4
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800099C
	mov r1, #30
	and r1, r1, r0
	lsl r1, r1, #1
	ldr r0, _0801C134  @ =gUnknown_0813A304
	add r1, r1, r0
	ldr r2, [r4, #88]
	ldrh r0, [r1]
	ldrh r3, [r2, #50]
	add r0, r0, r3
	strh r0, [r4, #50]
	ldrh r0, [r1, #2]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
	add r2, r2, #80
	ldrh r1, [r2]
	add r0, r4, #0
	add r0, r0, #80
	strh r1, [r0]
	add r0, r4, #0
	bl 0x08008D90
	add r0, r4, #0
	bl 0x080093A4
	lsl r0, r0, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r0, r0, #24
	cmp r0, #30
	bls _0801C138
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #112
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #114
	strh r0, [r1]
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl 0x08009EA4
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	mov r0, #1
	b _0801C13A
	.byte 0x00
	.byte 0x00
_0801C134:
	.4byte gUnknown_0813A304
_0801C138:
	mov r0, #0
_0801C13A:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801C0B4

