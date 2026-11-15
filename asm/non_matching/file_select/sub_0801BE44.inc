	THUMB_FUNC_START sub_0801BE44
sub_0801BE44: @ 0x0801BE44
	push {r4-r6,lr}
	add r5, r0, #0
	bl 0x0800099C
	ldr r4, [r5, #88]
	add r4, r4, #42
	mov r1, #3
	bl __umodsi3
	sub r0, r0, #1
	lsl r0, r0, #1
	ldrb r4, [r4]
	add r0, r0, r4
	mov r1, #6
	and r0, r0, r1
	lsl r1, r0, #2
	add r4, r5, #0
	add r4, r4, #43
	strb r1, [r4]
	lsr r0, r0, #1
	add r6, r5, #0
	add r6, r6, #42
	strb r0, [r6]
	bl 0x0800099C
	ldrb r2, [r4]
	lsr r2, r2, #1
	mov r1, #2
	and r1, r1, r0
	add r2, r2, r1
	lsl r2, r2, #1
	ldr r0, _0801BED8  @ =gUnknown_0813A1E4
	add r2, r2, r0
	ldr r1, [r5, #88]
	ldrh r0, [r2]
	ldrh r3, [r1, #50]
	add r0, r0, r3
	strh r0, [r5, #50]
	ldrh r0, [r2, #2]
	ldrh r2, [r1, #54]
	add r0, r0, r2
	strh r0, [r5, #54]
	add r1, r1, #80
	ldrh r1, [r1]
	add r0, r5, #0
	add r0, r0, #80
	strh r1, [r0]
	add r0, r5, #0
	bl 0x08008D90
	add r0, r5, #0
	bl 0x080093A4
	lsl r0, r0, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r0, r0, #24
	cmp r0, #30
	bls _0801BEDC
	ldrh r1, [r5, #50]
	add r0, r5, #0
	add r0, r0, #112
	strh r1, [r0]
	ldrh r0, [r5, #54]
	add r1, r5, #0
	add r1, r1, #114
	strh r0, [r1]
	ldrb r1, [r6]
	add r0, r5, #0
	bl 0x08003870
	mov r0, #1
	b _0801BEDE
_0801BED8:
	.4byte gUnknown_0813A1E4
_0801BEDC:
	mov r0, #0
_0801BEDE:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801BE44

