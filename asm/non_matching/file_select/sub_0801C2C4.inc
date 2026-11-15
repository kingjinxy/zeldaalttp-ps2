	THUMB_FUNC_START sub_0801C2C4
sub_0801C2C4: @ 0x0801C2C4
	push {r4,lr}
	add r4, r0, #0
	mov r0, #4
	strb r0, [r4, #20]
	bl 0x0800099C
	ldr r2, _0801C2E8  @ =gUnknown_0813A448
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	ldr r1, [r4, #100]
	cmp r1, #0
	bne _0801C2EC
	bl 0x0800099C
	b _0801C2F4
_0801C2E8:
	.4byte gUnknown_0813A448
_0801C2EC:
	add r0, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
_0801C2F4:
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r1]
	lsr r1, r1, #3
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #8
	add r0, r4, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C2C4

	.byte 0x00
	.byte 0x00
