	THUMB_FUNC_START sub_0801F384
sub_0801F384: @ 0x0801F384
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801F3B0
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #1
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #112
	and r0, r0, r1
	add r0, r0, #240
	add r1, r4, #0
	add r1, r1, #118
	strh r0, [r1]
_0801F3B0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F384

	.byte 0x00
	.byte 0x00
