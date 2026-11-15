	THUMB_FUNC_START sub_0801A210
sub_0801A210: @ 0x0801A210
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #4
	strb r0, [r4, #23]
	str r1, [r4, #12]
	add r2, r4, #0
	add r2, r2, #118
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
	bl 0x0800099C
	ldr r2, _0801A250  @ =gUnknown_08139B2C
	mov r1, #3
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	add r0, r4, #0
	add r0, r0, #112
	strh r1, [r0]
	add r0, r4, #0
	bl sub_0801A08C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801A250:
	.4byte gUnknown_08139B2C
	THUMB_FUNC_END sub_0801A210

